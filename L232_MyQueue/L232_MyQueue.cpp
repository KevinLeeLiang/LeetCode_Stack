//
// Created by garen-lee on 2025/4/6.
/**
  ******************************************************************************
  * @file           : L232_MyQueue.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/6
  ******************************************************************************
  */
//

#include "L232_MyQueue.h"
using namespace L232;

bool MyQueue::empty() {
    return in.empty() && out.empty();
}
int MyQueue::peek() {
    if (out.empty()) {
        while (!in.empty()) {
            out.push(in.top());
            in.pop();
        }
    }
    return out.top();
}
int MyQueue::pop() {
    int val = peek();
    out.pop();
    return val;
}
void MyQueue::push(int x) {
    in.push(x);
}

void L232_MyQueue::test() {
    MyQueue obj;
    obj.push(1);
    obj.push(2);
    cout << obj.peek() << endl;
    cout << obj.pop() << endl;
    cout << obj.empty() << endl;
}