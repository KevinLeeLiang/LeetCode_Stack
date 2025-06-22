//
// Created by garen-lee on 2025/6/22.
/**
  ******************************************************************************
  * @file           : L735_asteroidCollision.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/22
  ******************************************************************************
  */
//

#ifndef STACK_L735_ASTEROIDCOLLISION_H
#define STACK_L735_ASTEROIDCOLLISION_H

#include "util.h"
class L735_asteroidCollision : public LeetcodeStack {
private:
    vector<int> asteroidCollision(vector<int> &asteroids);
public:
    L735_asteroidCollision() {}
    void test();
};


#endif //STACK_L735_ASTEROIDCOLLISION_H
