//
// Created by garen-lee on 2025/3/16.
/**
  ******************************************************************************
  * @file           : L150_evalRPN.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/16
  ******************************************************************************
  */
//

#include "L150_evalRPN.h"

int L150_evalRPN::evalRPN(vector<string>& tokens) {
    stack<int> stk;
    for (auto token : tokens) {
        if (token == "+") {
            int a = stk.top();
            stk.pop();
            int b = stk.top();
            stk.pop();
            stk.push(a + b);
        } else if (token == "-") {
            int a = stk.top();
            stk.pop();
            int b = stk.top();
            stk.pop();
            stk.push(b - a);
        } else if (token == "*") {
            int a = stk.top();
            stk.pop();
            int b = stk.top();
            stk.pop();
            stk.push(a * b);
        } else if (token == "/") {
            int a = stk.top();
            stk.pop();
            int b = stk.top();
            stk.pop();
            stk.push(b / a);
        } else {
            stk.push(stoi(token));
        }
    }
    return stk.top();
}

void L150_evalRPN::test() {
    vector<string> tokens = {"2","1","+","3","*"};
    int result = evalRPN(tokens);
    cout << result << endl;
    tokens = {"4","13","5","/","+"};
    result = evalRPN(tokens);
    cout << result << endl;
    tokens = {"10","6","9","3","+","-11","*","/","*","17","+","5","+"};
    result = evalRPN(tokens);
    cout << result << endl;
}