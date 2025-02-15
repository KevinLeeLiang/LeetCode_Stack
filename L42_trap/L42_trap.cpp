//
// Created by garen-lee on 2025/2/15.
/**
  ******************************************************************************
  * @file           : L42_trap.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/15
  ******************************************************************************
  */
//

#include "L42_trap.h"

int L42_trap::trap(vector<int> &height) {
    int ans = 0;
    stack<int>stk;
    int n = height.size();
    for (int i = 0; i < n; i++) {
        while (!stk.empty() && height[stk.top()] < height[i]) {
            int cur = stk.top();
            stk.pop();
            if (stk.empty()) break;
            int distance = i - stk.top() - 1;
            int minHeight = min(height[stk.top()], height[i]) - height[cur];
            ans += distance * minHeight;
        }
        stk.push(i);
    }
    return ans;
}

void L42_trap::test() {
    vector<int> height = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout << trap(height) << endl;
    height = {4, 2, 0, 3, 2, 5};
    cout << trap(height) << endl;
}