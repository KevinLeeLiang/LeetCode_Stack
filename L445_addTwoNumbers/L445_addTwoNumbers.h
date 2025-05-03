//
// Created by garen-lee on 2025/5/4.
/**
  ******************************************************************************
  * @file           : L445_addTwoNumbers.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/4
  ******************************************************************************
  */
//

#ifndef STACK_L445_ADDTWONUMBERS_H
#define STACK_L445_ADDTWONUMBERS_H

#include "util.h"
class L445_addTwoNumbers : public LeetcodeStack {
private:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);
public:
    L445_addTwoNumbers() {}
    void test();
};


#endif //STACK_L445_ADDTWONUMBERS_H
