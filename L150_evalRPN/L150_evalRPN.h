//
// Created by garen-lee on 2025/3/16.
/**
  ******************************************************************************
  * @file           : L150_evalRPN.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/16
  ******************************************************************************
  */
//

#ifndef STACK_L150_EVALRPN_H
#define STACK_L150_EVALRPN_H

#include "util.h"
class L150_evalRPN : public LeetcodeStack {
private:
    int evalRPN(vector<string> &tokens);
public:
    L150_evalRPN() {}
    void test();
};


#endif //STACK_L150_EVALRPN_H
