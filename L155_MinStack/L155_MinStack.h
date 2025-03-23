//
// Created by garen-lee on 2025/3/23.
/**
  ******************************************************************************
  * @file           : L155_MinStack.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/23
  ******************************************************************************
  */
//

#ifndef STACK_L155_MINSTACK_H
#define STACK_L155_MINSTACK_H

#include "util.h"
namespace L155 {
    class MinStack {
    public:
        MinStack() {
            while (!stk_.empty()) {
                stk_.pop();
            }
            while (!min_stk_.empty()) {
                min_stk_.pop();
            }
        }
        void push(int val);
        void pop();
        int top();
        int getMin();
    private:
        stack<int>min_stk_;
        stack<int>stk_;
    };
}
class L155_MinStack : public LeetcodeStack {
public:
    L155_MinStack() {}
    void test();
};


#endif //STACK_L155_MINSTACK_H
