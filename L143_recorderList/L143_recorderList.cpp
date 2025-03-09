//
// Created by garen-lee on 2025/3/9.
/**
  ******************************************************************************
  * @file           : L143_recorderList.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/9
  ******************************************************************************
  */
//

#include "L143_recorderList.h"

ListNode* L143_recorderList::reverseList(ListNode *head) {
    if (!head) return nullptr;

    std::stack<int> s;
    ListNode* temp = head;

    // 将链表元素压入栈
    while (temp) {
        s.push(temp->val);
        temp = temp->next;
    }

    // 创建新的链表，头节点
    ListNode* newHead = new ListNode(s.top());
    s.pop();
    ListNode* newTemp = newHead;

    // 依次弹出栈顶元素，创建新链表
    while (!s.empty()) {
        newTemp->next = new ListNode(s.top());
        s.pop();
        newTemp = newTemp->next;
    }

    return newHead; // 返回新的头节点
}

void L143_recorderList::reorderList(ListNode *head) {
    if (head == nullptr || head->next == nullptr) {
        return;
    }
    std::stack<ListNode*> s;
    ListNode* temp = head;

    // 将链表元素压入栈
    while (temp) {
        s.push(temp);
        temp = temp->next;
    }
    temp = head;
    int size = s.size();
    while (!s.empty() && size>0) {
        ListNode* next = temp->next;
        temp->next = s.top();
        s.pop();
        temp->next->next = next;
        temp = temp->next->next;
        size-=2;
    }
    temp->next = nullptr;

}

void L143_recorderList::test() {
    vector<int> nums = {1, 2, 3, 4};
    ListNode* head = create_list(nums);
    reorderList(head);
    print_list(head);
    nums = {1, 2, 3, 4, 5};
    head = create_list(nums);
    reorderList(head);
    print_list(head);
}