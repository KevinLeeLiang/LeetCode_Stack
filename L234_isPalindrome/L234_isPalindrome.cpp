//
// Created by garen-lee on 2025/4/13.
/**
  ******************************************************************************
  * @file           : L234_isPalindrome.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/13
  ******************************************************************************
  */
//

#include "L234_isPalindrome.h"

ListNode* L234_isPalindrome::reverseList(ListNode* head) {
    if (!head || !head->next) return head;
    ListNode* pre = nullptr, *cur = head, *nxt;
    while (cur) {
        nxt = cur->next;
        cur->next = pre;
        pre = cur;
        cur = nxt;
    }
    return pre;
}

bool L234_isPalindrome::isPalindrome(ListNode* head) {
    if (!head) return true;
    ListNode* slow = head, *fast = head;
    while (fast->next && fast->next->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    ListNode* rev = reverseList(slow->next);
    while (rev) {
        if (rev->val != head->val) return false;
        rev = rev->next;
        head = head->next;
    }
    return true;
}

void L234_isPalindrome::test() {
    vector<int> nums = {1, 2, 2, 1};
    ListNode* head = create_list(nums);
    cout << isPalindrome(head) << endl;
    nums = {1, 2};
    head = create_list(nums);
    cout << isPalindrome(head) << endl;
}