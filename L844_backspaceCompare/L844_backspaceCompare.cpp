//
// Created by garen-lee on 2025/7/20.
/**
  ******************************************************************************
  * @file           : L844_backspaceCompare.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/20
  ******************************************************************************
  */
//

#include "L844_backspaceCompare.h"

bool L844_backspaceCompare::backspaceCompare(string s, string t) {
    stack<char> s_stk, t_stk;
    for (char c : s) {
        if (c == '#' && !s_stk.empty()) {
            s_stk.pop();
        } else if (c != '#') {
            s_stk.push(c);
        }
    }
    for (char c : t) {
        if (c == '#' && !t_stk.empty()) {
            t_stk.pop();
        } else if (c != '#') {
            t_stk.push(c);
        }
    }
    return s_stk == t_stk;
}

void L844_backspaceCompare::test() {
    string s = "ab#c";
    string t = "ad#c";
    cout << backspaceCompare(s, t) << endl;
    s = "ab##";
    t = "c#d#";
    cout << backspaceCompare(s, t) << endl;
    s = "a#c";
    t = "b";
    cout << backspaceCompare(s, t) << endl;
}