//
// Created by garen-lee on 2025/7/13.
/**
  ******************************************************************************
  * @file           : L770_basicCalculatorIV.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/13
  ******************************************************************************
  */
//

#ifndef STACK_L770_BASICCALCULATORIV_H
#define STACK_L770_BASICCALCULATORIV_H

#include "util.h"
class Poly {
private:
    map<list<string>, int> coeffs;
public:
    void update(list<string> key, int val) {
        coeffs[key] += val;
    }

    Poly add(Poly& that) {
        Poly ans;
        for (auto& m : this->coeffs) {
            ans.update(m.first, m.second);
        }
        for (auto& m : that.coeffs) {
            ans.update(m.first, m.second);
        }
        return ans;
    }

    Poly sub(Poly& that) {
        Poly ans;
        for (auto& m : this->coeffs) {
            ans.update(m.first, m.second);
        }
        for (auto& m : that.coeffs) {
            ans.update(m.first, -m.second);
        }
        return ans;
    }

    Poly mul(Poly& that) {
        Poly ans;
        for (auto& m1 : this->coeffs) {
            for (auto& m2 : that.coeffs) {
                list<string> newKey;
                for (string s : m1.first) {
                    newKey.push_back(s);
                }
                for (string s : m2.first) {
                    newKey.push_back(s);
                }
                newKey.sort();
                ans.update(newKey, m1.second * m2.second);
            }
        }
        return ans;
    }

    Poly evaluate(map<string, int>& evalMap) {
        Poly ans;
        for (auto& m : this->coeffs) {
            int c = m.second;
            list<string> k;
            for (string s : m.first) {
                if (evalMap.find(s) != evalMap.end()) {
                    c *= evalMap[s];
                } else {
                    k.push_back(s);
                }
            }
            ans.update(k, c);
        }
        return ans;
    }

    vector<string> toVector() {
        vector<string> ans;
        vector<list<string>> keys;
        for (auto& m : this->coeffs) {
            if (m.second == 0)
                continue;
            keys.push_back(m.first);
        }

        sort(keys.begin(), keys.end(), [](list<string>& a, list<string>& b) -> bool {
            if (a.size() != b.size()) {
                return (a.size() > b.size());
            } else {
                auto ita = a.begin();
                auto itb = b.begin();
                while ((ita != a.end()) && (*ita == *itb)) {
                    ++ita;
                    ++itb;
                }
                return (*ita < *itb);
            }
        });

        for (list<string>& k : keys) {
            string w = to_string(this->coeffs[k]);
            for (string s : k) {
                w.push_back('*');
                w.append(s);
            }
            ans.push_back(w);
        }
        return ans;
    }
};
class L770_basicCalculatorIV : public LeetcodeStack {
private:
    Poly make(string expr);
    Poly combine(Poly& left, Poly& right, char symbol);
    Poly parse(string expr);
    vector<string> basicCalculatorIV(string expression, vector<string>& evalvars, vector<int>& evalints);
public:
    L770_basicCalculatorIV() {}
    void test();
};


#endif //STACK_L770_BASICCALCULATORIV_H
