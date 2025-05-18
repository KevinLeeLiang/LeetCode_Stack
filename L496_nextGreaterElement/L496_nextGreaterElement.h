//
// Created by garen-lee on 2025/5/18.
/**
  ******************************************************************************
  * @file           : L496_nextGreaterElement.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/18
  ******************************************************************************
  */
//

#ifndef STACK_L496_NEXTGREATERELEMENT_H
#define STACK_L496_NEXTGREATERELEMENT_H

#include "util.h"
class L496_nextGreaterElement : public LeetcodeStack {
private:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2);
public:
    L496_nextGreaterElement() {}
    void test();
};


#endif //STACK_L496_NEXTGREATERELEMENT_H
