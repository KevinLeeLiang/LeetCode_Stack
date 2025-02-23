//
// Created by garen-lee on 2025/2/23.
/**
  ******************************************************************************
  * @file           : L84_largestRectangleArea.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/23
  ******************************************************************************
  */
//

#include "L84_largestRectangleArea.h"

int L84_largestRectangleArea::largestRectangleArea(vector<int> &heights) {
    int n = heights.size();
    vector<int> left(n), right(n, n);

    stack<int> mono_stack;
    for (int i = 0; i < n; ++i) {
        while (!mono_stack.empty() && heights[mono_stack.top()] >= heights[i]) {
            right[mono_stack.top()] = i;
            mono_stack.pop();
        }
        left[i] = (mono_stack.empty() ? -1 : mono_stack.top());
        mono_stack.push(i);
    }

    int ans = 0;
    for (int i = 0; i < n; ++i) {
        ans = max(ans, (right[i] - left[i] - 1) * heights[i]);
    }
    return ans;
}

void L84_largestRectangleArea::test() {
    vector<int> heights = {2, 1, 5, 6, 2, 3};
    cout << largestRectangleArea(heights) << endl;
    heights = {2, 4};
    cout << largestRectangleArea(heights) << endl;
    heights = {5,5,1,7,1,1,5,2,7,6};
    cout << largestRectangleArea(heights) << endl;
}