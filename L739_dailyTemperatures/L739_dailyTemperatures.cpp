//
// Created by garen-lee on 2025/6/29.
/**
  ******************************************************************************
  * @file           : L739_dailyTemperatures.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/29
  ******************************************************************************
  */
//

#include "L739_dailyTemperatures.h"

vector<int> L739_dailyTemperatures::dailyTemperatures(vector<int>& temperatures) {
    int n = temperatures.size();
    vector<int> res(n);
    stack<int> s;
    for (int i = n - 1; i >= 0; --i) {
        while (!s.empty() && temperatures[i] >= temperatures[s.top()]) {
            s.pop();
        }
        res[i] = s.empty() ? 0 : s.top() - i;
        s.push(i);
    }
    return res;
}

void L739_dailyTemperatures::test() {
    vector<int> temperatures = {73, 74, 75, 71, 69, 72, 76, 73};
    vector<int> res = dailyTemperatures(temperatures);
    print_vector(res);
    temperatures = {30, 40, 50, 60};
    res = dailyTemperatures(temperatures);
    print_vector(res);
    temperatures = {30, 60, 90};
    res = dailyTemperatures(temperatures);
}