//
// Created by garen-lee on 2025/5/11.
/**
  ******************************************************************************
  * @file           : L456_find132pattern.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/11
  ******************************************************************************
  */
//

#ifndef STACK_L456_FIND132PATTERN_H
#define STACK_L456_FIND132PATTERN_H

#include "util.h"
class L456_find132pattern : public LeetcodeStack {
private:
    bool find132pattern(vector<int> &nums);
public:
    L456_find132pattern() {}
    void test();
};


#endif //STACK_L456_FIND132PATTERN_H
