//
// Created by garen-lee on 2025/5/18.
/**
  ******************************************************************************
  * @file           : L503_nextGreaterElements.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/18
  ******************************************************************************
  */
//

#include "L503_nextGreaterElements.h"

vector<int> L503_nextGreaterElements::nextGreaterElements(vector<int> &nums) {
    int n = nums.size();
    vector<int> res(n, -1);
    stack<int> stk;
    for (int i = 0; i < n * 2; ++i) {
        while (!stk.empty() && nums[stk.top()] < nums[i % n]) {
            res[stk.top()] = nums[i % n];
            stk.pop();
        }
        stk.push(i % n);
    }
    return res;
}

void L503_nextGreaterElements::test() {
    vector<int> nums = {1, 2, 1};
    vector<int>res = nextGreaterElements(nums);
    print_vector(res);
    nums = {1, 2, 3, 4, 3};
    res = nextGreaterElements(nums);
    print_vector(res);
}