//
// Created by garen-lee on 2025/6/29.
/**
  ******************************************************************************
  * @file           : L739_dailyTemperatures.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/29
  ******************************************************************************
  */
//

#ifndef STACK_L739_DAILYTEMPERATURES_H
#define STACK_L739_DAILYTEMPERATURES_H

#include "util.h"
class L739_dailyTemperatures : public LeetcodeStack {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures);
    L739_dailyTemperatures() {}
    void test();
};


#endif //STACK_L739_DAILYTEMPERATURES_H
