//
// Created by garen-lee on 2025/3/30.
/**
  ******************************************************************************
  * @file           : L225_MyStack.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/30
  ******************************************************************************
  */
//

#ifndef STACK_L225_MYSTACK_H
#define STACK_L225_MYSTACK_H

#include "util.h"

namespace L225 {
    class MyStack {
    public:
        MyStack() {
            queue1 = queue<int>();
            queue2 = queue<int>();
        }
        void push(int x);
        int pop();
        int top();
        bool empty();

    private:
        queue<int> queue1;
        queue<int> queue2;
    };
}
class L225_MyStack : public LeetcodeStack {
public:
    L225_MyStack() {}
    void test();
};


#endif //STACK_L225_MYSTACK_H
