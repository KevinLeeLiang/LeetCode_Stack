//
// Created by garen-lee on 2025/6/29.
/**
  ******************************************************************************
  * @file           : L736_evaluate.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/29
  ******************************************************************************
  */
//

#include "L736_evaluate.h"

int L736_evaluate::calculateToken(const string &token) {
    if (islower(token[0])) {
        return scope[token].back();
    } else {
        return stoi(token);
    }
}

int L736_evaluate::evaluate(string expression) {
    vector<vector<string>> vars;
    int start = 0, n = expression.size();
    stack<Expr> s;
    Expr cur(VALUE);
    while (start < n) {
        if (expression[start] == ' ') {
            start++; // 去掉空格
            continue;
        }
        if (expression[start] == '(') {
            start++; // 去掉左括号
            s.push(cur);
            cur = Expr(NONE);
            continue;
        }
        string token;
        if (expression[start] == ')') { // 本质上是把表达式转成一个 token
            start++; // 去掉右括号
            if (cur.status == LET2) {
                token = to_string(cur.value);
                for (auto var : vars.back()) { // 清除作用域
                    scope[var].pop_back();
                }
                vars.pop_back();
            } else if (cur.status == ADD2) {
                token = to_string(cur.e1 + cur.e2);
            } else {
                token = to_string(cur.e1 * cur.e2);
            }
            cur = s.top(); // 获取上层状态
            s.pop();
        } else {
            while (start < n && expression[start] != ' ' && expression[start] != ')') {
                token.push_back(expression[start]);
                start++;
            }
        }
        switch (cur.status) {
            case VALUE:
                cur.value = stoi(token);
                cur.status = DONE;
                break;
            case NONE:
                if (token == "let") {
                    cur.status = LET;
                    vars.emplace_back(); // 记录该层作用域的所有变量, 方便后续的清除
                } else if (token == "add") {
                    cur.status = ADD;
                } else if (token == "mult") {
                    cur.status = MULT;
                }
                break;
            case LET:
                if (expression[start] == ')') { // let 表达式的最后一个 expr 表达式
                    cur.value = calculateToken(token);
                    cur.status = LET2;
                } else {
                    cur.var = token;
                    vars.back().push_back(token); // 记录该层作用域的所有变量, 方便后续的清除
                    cur.status = LET1;
                }
                break;
            case LET1:
                scope[cur.var].push_back(calculateToken(token));
                cur.status = LET;
                break;
            case ADD:
                cur.e1 = calculateToken(token);
                cur.status = ADD1;
                break;
            case ADD1:
                cur.e2 = calculateToken(token);
                cur.status = ADD2;
                break;
            case MULT:
                cur.e1 = calculateToken(token);
                cur.status = MULT1;
                break;
            case MULT1:
                cur.e2 = calculateToken(token);
                cur.status = MULT2;
                break;
        }
    }
    return cur.value;
}

void L736_evaluate::test() {
    string expression = "(let x 2 (mult x (let x 3 y 4 (add x y))))";
    int ans = evaluate(expression);
    cout << ans << endl;
    expression = "(let x 3 x 2 x)";
    ans = evaluate(expression);
    cout << ans << endl;
    expression = "(let x 1 y 2 x (add x y) (add x y))";
    ans = evaluate(expression);
    cout << ans << endl;
}