//
// Created by garen-lee on 2025/6/15.
/**
  ******************************************************************************
  * @file           : L682_calPoints.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/15
  ******************************************************************************
  */
//

#include "L682_calPoints.h"
int L682_calPoints::calPoints(vector<string> &ops) {
    stack<int> s;
    for (auto &op : ops) {
        if (op == "C") {
            s.pop();
        } else if (op == "D") {
            s.push(s.top() * 2);
        } else if (op == "+") {
            int a = s.top();
            s.pop();
            int b = s.top();
            s.push(a);
            s.push(a + b);
        } else {
            s.push(stoi(op));
        }
    }
    int sum = 0;
    while (!s.empty()) {
        sum += s.top();
        s.pop();
    }
    return sum;
}

void L682_calPoints::test() {
    vector<string> ops = {"5", "2", "C", "D", "+"};
    cout << calPoints(ops) << endl;
    ops = {"5", "-2", "4", "C", "D", "9", "+", "+"};
    cout << calPoints(ops) << endl;
    ops = {"1"};
    cout << calPoints(ops) << endl;
}