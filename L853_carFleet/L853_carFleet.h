//
// Created by garen-lee on 2025/8/3.
/**
  ******************************************************************************
  * @file           : L853_carFleet.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/8/3
  ******************************************************************************
  */
//

#ifndef STACK_L853_CARFLEET_H
#define STACK_L853_CARFLEET_H

#include "util.h"
class L853_carFleet : public LeetcodeStack  {
private:
    int carFleet(int target, vector<int>& position, vector<int>& speed);
public:
    L853_carFleet() {}
    void test();
};


#endif //STACK_L853_CARFLEET_H
