//
// Created by garen-lee on 2025/3/23.
/**
  ******************************************************************************
  * @file           : L155_MinStack.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/23
  ******************************************************************************
  */
//

#include "L155_MinStack.h"
using namespace L155;

void MinStack::push(int val) {
    stk_.push(val);
    if (!min_stk_.empty() && val < min_stk_.top()) {
        min_stk_.push(val);
    } else if (min_stk_.empty()) {
        min_stk_.push(val);
    } else {
        min_stk_.push(min_stk_.top());
    }
}

int MinStack::top() {
    if (stk_.empty()) {
        return -1;
    } else {
        return stk_.top();
    }
}

void MinStack::pop() {
    if (stk_.empty()) {
        return;
    } else {
        stk_.pop();
        min_stk_.pop();
    }
    return;
}

int MinStack::getMin() {
    return min_stk_.top();
}

void L155_MinStack::test(){
    MinStack min_stk;
    min_stk.push(-2);
    min_stk.push(0);
    min_stk.push(-3);
    cout << min_stk.getMin() << endl;
    min_stk.pop();
    cout << min_stk.top() << endl;
    cout << min_stk.getMin() << endl;
}