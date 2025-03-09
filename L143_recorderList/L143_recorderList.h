//
// Created by garen-lee on 2025/3/9.
/**
  ******************************************************************************
  * @file           : L143_recorderList.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/9
  ******************************************************************************
  */
//

#ifndef STACK_L143_RECORDERLIST_H
#define STACK_L143_RECORDERLIST_H

#include "util.h"
class L143_recorderList : public LeetcodeStack {
private:
    void reorderList(ListNode* head);
    ListNode* reverseList(ListNode *head);
public:
    L143_recorderList() {}
    void test();
};


#endif //STACK_L143_RECORDERLIST_H
