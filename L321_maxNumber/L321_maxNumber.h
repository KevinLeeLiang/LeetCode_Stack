//
// Created by garen-lee on 2025/4/20.
/**
  ******************************************************************************
  * @file           : L321_maxNumber.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/20
  ******************************************************************************
  */
//

#ifndef STACK_L321_MAXNUMBER_H
#define STACK_L321_MAXNUMBER_H

#include "util.h"
class L321_maxNumber : public LeetcodeStack {
private:
    vector<int> maxNumber(vector<int>& nums1, vector<int>& nums2, int k);
    vector<int> MaxSubsequence(vector<int>& nums, int k);
    vector<int> merge(vector<int>& subsequence1, vector<int>& subsequence2);
    int compare(vector<int>& subsequence1, int index1, vector<int>& subsequence2, int index2);

public:
    L321_maxNumber() {}
    void test();
};


#endif //STACK_L321_MAXNUMBER_H
