//
// Created by garen-lee on 2025/7/6.
/**
  ******************************************************************************
  * @file           : L768_maxChunksToSorted.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/6
  ******************************************************************************
  */
//

#ifndef STACK_L768_MAXCHUNKSTOSORTED_H
#define STACK_L768_MAXCHUNKSTOSORTED_H

#include "util.h"
class L768_maxChunksToSorted : public LeetcodeStack {
private:
    int maxChunksToSorted(vector<int> &arr);
public:
    L768_maxChunksToSorted() {}
    void test();
};


#endif //STACK_L768_MAXCHUNKSTOSORTED_H
