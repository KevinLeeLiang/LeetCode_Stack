//
// Created by garen-lee on 2025/6/8.
/**
  ******************************************************************************
  * @file           : L636_exclusiveTime.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/8
  ******************************************************************************
  */
//

#ifndef STACK_L636_EXCLUSIVETIME_H
#define STACK_L636_EXCLUSIVETIME_H

#include "util.h"
class L636_exclusiveTime : public LeetcodeStack {
private:
    vector<int> exclusiveTime(int n, vector<string> &logs);
public:
    L636_exclusiveTime() {}
    void test();
};


#endif //STACK_L636_EXCLUSIVETIME_H
