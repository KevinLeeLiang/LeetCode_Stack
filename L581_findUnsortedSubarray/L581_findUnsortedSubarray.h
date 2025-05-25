//
// Created by garen-lee on 2025/5/25.
/**
  ******************************************************************************
  * @file           : L581_findUnsortedSubarray.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/25
  ******************************************************************************
  */
//

#ifndef STACK_L581_FINDUNSORTEDSUBARRAY_H
#define STACK_L581_FINDUNSORTEDSUBARRAY_H

#include "util.h"
class L581_findUnsortedSubarray : public LeetcodeStack {
private:
    int findUnsortedSubarray(vector<int> &nums);
public:
    L581_findUnsortedSubarray() {}
    void test();
};


#endif //STACK_L581_FINDUNSORTEDSUBARRAY_H
