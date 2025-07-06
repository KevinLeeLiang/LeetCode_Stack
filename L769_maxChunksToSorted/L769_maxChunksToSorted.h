//
// Created by garen-lee on 2025/7/6.
/**
  ******************************************************************************
  * @file           : L769_maxChunksToSorted.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/6
  ******************************************************************************
  */
//

#ifndef STACK_L769_MAXCHUNKSTOSORTED_H
#define STACK_L769_MAXCHUNKSTOSORTED_H

#include "util.h"
class L769_maxChunksToSorted : public LeetcodeStack {
private:
    int maxChunksToSorted(vector<int>& arr);
public:
    L769_maxChunksToSorted() {}
    void test();
};


#endif //STACK_L769_MAXCHUNKSTOSORTED_H
