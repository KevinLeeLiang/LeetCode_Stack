//
// Created by garen-lee on 2025/2/15.
/**
  ******************************************************************************
  * @file           : L42_trap.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/15
  ******************************************************************************
  */
//

#ifndef STACK_L42_TRAP_H
#define STACK_L42_TRAP_H
#include "util.h"

class L42_trap : public LeetcodeStack{
private :
    int trap(vector<int> &height);
public:
    L42_trap() {}
    void test();
};


#endif //STACK_L42_TRAP_H
