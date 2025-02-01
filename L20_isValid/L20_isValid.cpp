//
// Created by garen-lee on 2025/2/1.
/**
  ******************************************************************************
  * @file           : L20_isValid.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/1
  ******************************************************************************
  */
//

#include "L20_isValid.h"
bool L20_isValid::isValid(string s){
    if (s.size() % 2 != 0) {
        return false;
    }
    stack<char> stack;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            stack.push(s[i]);
        } else {
            if (stack.empty()) {
                return false;
            }
            char c = stack.top();
            stack.pop();
            if (s[i] == ')' && c != '(') {
                return false;
            }
            if (s[i] == ']' && c != '[') {
                return false;
            }
            if (s[i] == '}' && c != '{') {
                return false;
            }
        }
    }
    return true && stack.empty();
}

void L20_isValid::test() {
    string s = "()";
    bool res = isValid(s);
    cout << "res: " << res << endl;
    s = "()[]{}";
    res = isValid(s);
    cout << "res: " << res << endl;
    s = "(]";
    res = isValid(s);
    cout << "res: " << res << endl;
    s = "([])";
    res = isValid(s);
    cout << "res: " << res << endl;
    s = "([)]";
    res = isValid(s);
    cout << "res: " << res << endl;
}