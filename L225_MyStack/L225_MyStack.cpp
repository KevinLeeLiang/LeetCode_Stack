//
// Created by garen-lee on 2025/3/30.
/**
  ******************************************************************************
  * @file           : L225_MyStack.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/30
  ******************************************************************************
  */
//

#include "L225_MyStack.h"
using namespace L225;

void MyStack::push(int x) {
    queue2.push(x);
    while (!queue1.empty()) {
        queue2.push(queue1.front());
        queue1.pop();
    }
    swap(queue1, queue2);
}
int MyStack::pop() {
    int r = queue1.front();
    queue1.pop();
    return r;
}
bool MyStack::empty() {
    return queue1.empty();
}
int MyStack::top() {
    int r = queue1.front();
    return r;
}

void L225_MyStack::test() {
    MyStack stk;
    stk.push(1);
    stk.push(2);
    cout << stk.top() << endl;
    cout << stk.pop() << endl;
    cout << stk.empty() << endl;
}