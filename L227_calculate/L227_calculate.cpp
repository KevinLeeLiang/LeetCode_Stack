//
// Created by garen-lee on 2025/4/6.
/**
  ******************************************************************************
  * @file           : L227_calculate.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/6
  ******************************************************************************
  */
//

#include "L227_calculate.h"

int L227_calculate::calculate(string s) {
    vector<int>stk;
    char preSign = '+';
    long long num = 0;
    int n = s.size();
    for (int i = 0; i < n; ++i) {
        if (isdigit(s[i])) {
            num = num * 10 + s[i] - '0';
        }
        if (!isdigit(s[i]) && s[i] != ' ' || i == n - 1) {
            switch (preSign) {
                case '+':
                    stk.push_back(num);
                    break;
                case '-':
                    stk.push_back(-num);
                    break;
                case '*':
                    stk.back() *= num;
                    break;
                default:
                    stk.back() /= num;
                    break;
            }
            preSign = s[i];
            num = 0;
        }
    }
    return accumulate(stk.begin(), stk.end(), 0);
}

void L227_calculate::test() {
    string s;
    s = "3+2*2";
    cout << calculate(s) << endl;
    s = " 3/2 ";
    cout << calculate(s) << endl;
    s = " 3+5 / 2 ";
    cout << calculate(s) << endl;
    s = "2147483647";
    cout << calculate(s) << endl;
}