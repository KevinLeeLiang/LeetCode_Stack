//
// Created by garen-lee on 2025/3/30.
/**
  ******************************************************************************
  * @file           : L224_calculate.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/30
  ******************************************************************************
  */
//

#include "L224_calculate.h"

int L224_calculate::calculate(string s) {
    stack<int> ops;
    ops.push(1);
    int sign = 1;
    int ret = 0;
    int n = s.size();
    int i = 0;
    while (i < n) {
        if (s[i] == ' ') {
            i++;
        } else if (s[i] == '+' || s[i] == '-') {
            if (s[i] == '+') {
                sign = ops.top();
            } else {
                sign = -ops.top();
            }
            i++;
        } else if (s[i] == '(' || s[i] == ')') {
            if (s[i] == '(') {
                ops.push(sign);
            } else {
                ops.pop();
            }
            i++;
        } else {
            long num = 0;
            while (i < n && isdigit(s[i])) {
                num = num * 10 + s[i] - '0';
                i++;
            }
            ret += sign * num;
        }
    }
    return ret;
}

void L224_calculate::test() {
    string s = "1 + 1";
    cout << calculate(s) << endl;
    s = " 2-1 + 2 ";
    cout << calculate(s) << endl;
    s = "(1+(4+5+2)-3)+(6+8)";
    cout << calculate(s) << endl;
}