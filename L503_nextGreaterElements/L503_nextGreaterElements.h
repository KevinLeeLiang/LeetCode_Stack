//
// Created by garen-lee on 2025/5/18.
/**
  ******************************************************************************
  * @file           : L503_nextGreaterElements.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/18
  ******************************************************************************
  */
//

#ifndef STACK_L503_NEXTGREATERELEMENTS_H
#define STACK_L503_NEXTGREATERELEMENTS_H

#include "util.h"
class L503_nextGreaterElements : public LeetcodeStack {
private:
    vector<int> nextGreaterElements(vector<int> &nums);
public:
    L503_nextGreaterElements() {}
    void test() ;
};


#endif //STACK_L503_NEXTGREATERELEMENTS_H
