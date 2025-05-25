//
// Created by garen-lee on 2025/5/25.
/**
  ******************************************************************************
  * @file           : L581_findUnsortedSubarray.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/25
  ******************************************************************************
  */
//

#include "L581_findUnsortedSubarray.h"

int L581_findUnsortedSubarray::findUnsortedSubarray(vector<int>& nums) {
    int n = nums.size();
    int maxn = INT_MIN, right = -1;
    int minn = INT_MAX, left = -1;
    for (int i = 0; i < n; i++) {
        if (maxn > nums[i]) {
            right = i;
        } else {
            maxn = nums[i];
        }
        if (minn < nums[n - i - 1]) {
            left = n - i - 1;
        } else {
            minn = nums[n - i - 1];
        }
    }
    return right == -1 ? 0 : right - left + 1;
}

void L581_findUnsortedSubarray::test() {
    vector<int> nums = {2, 6, 4, 8, 10, 9, 15};
    cout << findUnsortedSubarray(nums) << endl;
    nums = {1, 2, 3, 4};
    cout << findUnsortedSubarray(nums) << endl;
    nums = {1};
    cout << findUnsortedSubarray(nums) << endl;
}
