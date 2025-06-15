//
// Created by garen-lee on 2025/6/15.
/**
  ******************************************************************************
  * @file           : L678_checkValidString.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/15
  ******************************************************************************
  */
//

#include "L678_checkValidString.h"

bool L678_checkValidString::checkValidString(string s) {
    stack<int>left_stk;
    stack<int>star_stk;
    for (int i = 0; i < s.size(); ++i) {
        auto c = s[i];
        if (c == '(') {
            left_stk.push(i);
        } else if (c == '*') {
            star_stk.push(i);
        } else {
            if (!left_stk.empty()) {
                left_stk.pop();
            } else if (!star_stk.empty()) {
                star_stk.pop();
            } else {
                return false;
            }
        }
    }
    while (!left_stk.empty() && !star_stk.empty()) {
        int left = left_stk.top();
        left_stk.pop();
        int star = star_stk.top();
        star_stk.pop();
        if (left > star) {
            return false;
        }
    }
    return left_stk.empty();
}

void L678_checkValidString::test() {
    string s = "()";
    cout << checkValidString(s) << endl;
    s = "(*)";
    cout << checkValidString(s) << endl;
    s = "(*))";
    cout << checkValidString(s) << endl;
}