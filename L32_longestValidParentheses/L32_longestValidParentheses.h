//
// Created by garen-lee on 2025/2/1.
/**
  ******************************************************************************
  * @file           : L32_longestValidParentheses.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/1
  ******************************************************************************
  */
//

#ifndef STACK_L32_LONGESTVALIDPARENTHESES_H
#define STACK_L32_LONGESTVALIDPARENTHESES_H
#include"util.h"

class L32_longestValidParentheses : public LeetcodeStack{
private:
    int longestValidParentheses(string s);
public:
    L32_longestValidParentheses(){}
    void test();
};


#endif //STACK_L32_LONGESTVALIDPARENTHESES_H
