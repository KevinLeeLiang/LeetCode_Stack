//
// Created by garen-lee on 2025/7/13.
/**
  ******************************************************************************
  * @file           : L770_basicCalculatorIV.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/13
  ******************************************************************************
  */
//

#include "L770_basicCalculatorIV.h"

Poly L770_basicCalculatorIV::make(string expr) {
    Poly ans;
    list<string> k;
    if (isdigit(expr[0])) {
        ans.update(k, stoi(expr));
    } else {
        k.push_back(expr);
        ans.update(k, 1);
    }
    return ans;
}

Poly L770_basicCalculatorIV::combine(Poly& left, Poly& right, char symbol) {
    if (symbol == '+') {
        return left.add(right);
    } else if (symbol == '-') {
        return left.sub(right);
    } else if (symbol == '*') {
        return left.mul(right);
    } else {
        throw "unexpected symbol";
    }
}

Poly L770_basicCalculatorIV::parse(string expr) {
    vector<Poly> bucket;
    vector<char> symbols;
    int i = 0;
    while (i < expr.size()) {
        if (expr[i] == '(') {
            int c = 0;
            int j = i;
            for (; j < expr.size(); ++j) {
                if (expr[j] == '(') {
                    ++c;
                } else if (expr[j] == ')') {
                    --c;
                }
                if (c == 0) {
                    break;
                }
            }
            bucket.push_back(parse(expr.substr(i + 1, j - i - 1)));
            i = j;
        } else if (isdigit(expr[i]) || isalpha(expr[i])) {
            int j = i;
            for (; j < expr.size(); ++j) {
                if (expr[j] == ' ') {
                    break;
                }
            }
            bucket.push_back(make(expr.substr(i, j - i)));
            i = j;
        } else if (expr[i] != ' ') {
            symbols.push_back(expr[i]);
        }
        ++i;
    }

    for (int j = symbols.size() - 1; j >= 0; --j) {
        if (symbols[j] == '*') {
            bucket[j] = combine(bucket[j], bucket[j + 1], '*');
            bucket.erase(bucket.begin() + j + 1);
            symbols.erase(symbols.begin() + j);
        }
    }

    if (bucket.empty()) {
        return Poly();
    }
    Poly ans = bucket[0];
    for (int j = 0; j < symbols.size(); ++j) {
        ans = combine(ans, bucket[j + 1], symbols[j]);
    }

    return ans;
}

vector<string> L770_basicCalculatorIV::basicCalculatorIV(string expression, vector<string>& evalvars, vector<int>& evalints) {
    map<string, int> evalMap;
    for (int i = 0; i < evalvars.size(); ++i) {
        evalMap[evalvars[i]] = evalints[i];
    }

    return parse(expression).evaluate(evalMap).toVector();
}

void L770_basicCalculatorIV::test() {
    string expression = "e + 8 - a + 5";
    vector<string> evalvars = {"e"};
    vector<int> evalints = {1};
    vector<string> ans = basicCalculatorIV(expression, evalvars, evalints);
    print_vector(ans);
    expression = "e - 8 + temperature - pressure";
    evalvars = {"e", "temperature"};
    evalints = {1, 12};
    ans = basicCalculatorIV(expression, evalvars, evalints);
    print_vector(ans);
    expression = "(e + 8) * (e - 8)";
    evalvars = {};
    evalints = {};
    ans = basicCalculatorIV(expression, evalvars, evalints);
    print_vector(ans);
}