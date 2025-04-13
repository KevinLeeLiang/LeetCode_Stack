//
// Created by garen-lee on 2025/4/13.
/**
  ******************************************************************************
  * @file           : L234_isPalindrome.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/13
  ******************************************************************************
  */
//

#ifndef STACK_L234_ISPALINDROME_H
#define STACK_L234_ISPALINDROME_H

#include "util.h"
class L234_isPalindrome : public LeetcodeStack {
private:
    ListNode* reverseList(ListNode* head);
    bool isPalindrome(ListNode* head);
public:
    L234_isPalindrome() {}
    void test();
};


#endif //STACK_L234_ISPALINDROME_H
