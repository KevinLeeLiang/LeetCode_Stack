//
// Created by garen-lee on 2025/6/15.
/**
  ******************************************************************************
  * @file           : L682_calPoints.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/15
  ******************************************************************************
  */
//

#ifndef STACK_L682_CALPOINTS_H
#define STACK_L682_CALPOINTS_H

#include "util.h"
class L682_calPoints : public LeetcodeStack {
private:
    int calPoints(vector<string>&operations);
public:
    L682_calPoints() {}
    void test();
};


#endif //STACK_L682_CALPOINTS_H
