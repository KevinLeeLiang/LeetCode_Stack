//
// Created by garen-lee on 2025/2/1.
/**
  ******************************************************************************
  * @file           : L32_longestValidParentheses.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/1
  ******************************************************************************
  */
//

#include "L32_longestValidParentheses.h"
int L32_longestValidParentheses::longestValidParentheses(string s){
    int maxans = 0;
    stack<int> stk;
    stk.push(-1);
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(') {
            stk.push(i);
        } else {
            stk.pop();
            if (stk.empty()) {
                stk.push(i);
            } else {
                maxans = max(maxans, i - stk.top());
            }
        }
    }
    return maxans;
}

void L32_longestValidParentheses::test() {
    string s;
    int res;
    s = "((()))";
    res = longestValidParentheses(s);
    cout << "res: " << res << endl;
    s = "))()";
    res = longestValidParentheses(s);
    cout << "res: " << res << endl;
    s = "(()";
    res = longestValidParentheses(s);
    cout << "res: " << res << endl;
    s = ")()())";
    res = longestValidParentheses(s);
    cout << "res: " << res << endl;
    s = "";
    res = longestValidParentheses(s);
    cout << "res: " << res << endl;
}