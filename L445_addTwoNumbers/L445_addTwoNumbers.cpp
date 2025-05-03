//
// Created by garen-lee on 2025/5/4.
/**
  ******************************************************************************
  * @file           : L445_addTwoNumbers.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/4
  ******************************************************************************
  */
//

#include "L445_addTwoNumbers.h"

ListNode* L445_addTwoNumbers::addTwoNumbers(ListNode* l1, ListNode* l2) {
    stack<int>s1, s2;
    while (l1) {
        s1.push(l1->val);
        l1 = l1->next;
    }
    while (l2) {
        s2.push(l2->val);
        l2 = l2->next;
    }
    ListNode *res = nullptr;
    int carry = 0;
    while (!s1.empty() || !s2.empty()) {
        int a = s1.empty() ? 0 : s1.top();
        int b = s2.empty() ? 0 : s2.top();
        int sum = a + b + carry;
        carry = sum / 10;
        sum = sum % 10;
        if (!s1.empty()) s1.pop();
        if (!s2.empty()) s2.pop();
        ListNode* node = new ListNode(sum);
        node->next = res;
        res = node;
    }
    if (carry) {
        ListNode* node = new ListNode(carry);
        node->next = res;
        res = node;
    }
    return res;
}

void L445_addTwoNumbers::test() {
    vector<int> val1 = {7, 2, 4, 3};
    vector<int> val2 = {5, 6, 4};
    ListNode* l1 =  create_list(val1);
    ListNode* l2 =  create_list(val2);
    ListNode* res = addTwoNumbers(l1, l2);
    print_list(res);
    val1 = {2,4,3};
    val2 = {5,6,4};
    l1 =  create_list(val1);
    l2 =  create_list(val2);
    res = addTwoNumbers(l1, l2);
    print_list(res);
    val1 = {0};
    val2 = {0};
    l1 =  create_list(val1);
    l2 =  create_list(val2);
    res = addTwoNumbers(l1, l2);
    print_list(res);
    val1 = {5};
    val2 = {5};
    l1 =  create_list(val1);
    l2 =  create_list(val2);
    res = addTwoNumbers(l1, l2);
    print_list(res);
}
