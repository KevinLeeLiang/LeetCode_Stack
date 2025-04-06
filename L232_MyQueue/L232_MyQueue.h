//
// Created by garen-lee on 2025/4/6.
/**
  ******************************************************************************
  * @file           : L232_MyQueue.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/6
  ******************************************************************************
  */
//

#ifndef STACK_L232_MYQUEUE_H
#define STACK_L232_MYQUEUE_H

#include "util.h"

namespace L232 {
    class MyQueue {
    public:
        MyQueue() {
            in = stack<int>();
            out = stack<int>();
        }
        void push(int x);
        int pop();
        int peek();
        bool empty();
    private:
        stack<int> in;
        stack<int> out;
    };
}

class L232_MyQueue : public LeetcodeStack {
public:
    L232_MyQueue() {}
    void test();
};


#endif //STACK_L232_MYQUEUE_H
