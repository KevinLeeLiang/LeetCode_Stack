//
// Created by garen-lee on 2025/5/18.
/**
  ******************************************************************************
  * @file           : L496_nextGreaterElement.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/18
  ******************************************************************************
  */
//

#include "L496_nextGreaterElement.h"

vector<int> L496_nextGreaterElement::nextGreaterElement(vector<int> &nums1, vector<int> &nums2) {
    int m = nums1.size();
    int n = nums2.size();
    vector<int> res(m);
    for (int i = 0; i < m; ++i) {
        int j = 0;
        while (j < n && nums2[j] != nums1[i]) {
            ++j;
        }
        int k = j + 1;
        while (k < n && nums2[k] < nums2[j]) {
            ++k;
        }
        res[i] = k < n ? nums2[k] : -1;
    }
    return res;
}

void L496_nextGreaterElement::test() {
    vector<int> nums1 = {4, 1, 2};
    vector<int> nums2 = {1, 3, 4, 2};
    vector<int> res = nextGreaterElement(nums1, nums2);
    print_vector(res);
    nums1 = {2, 4};
    nums2 = {1, 2, 3, 4};
    res = nextGreaterElement(nums1, nums2);
    print_vector(res);
}