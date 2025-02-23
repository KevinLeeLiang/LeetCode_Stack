//
// Created by garen-lee on 2025/2/23.
/**
  ******************************************************************************
  * @file           : L85_maximalRectangle.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/23
  ******************************************************************************
  */
//

#ifndef STACK_L85_MAXIMALRECTANGLE_H
#define STACK_L85_MAXIMALRECTANGLE_H

#include "util.h"
class L85_maximalRectangle : public LeetcodeStack{
private:
    int maximalRectangle(vector<vector<char>>& matrix);
public:
    L85_maximalRectangle(){}
    void test();
};


#endif //STACK_L85_MAXIMALRECTANGLE_H
