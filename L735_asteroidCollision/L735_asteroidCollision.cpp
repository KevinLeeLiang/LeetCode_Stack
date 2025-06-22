//
// Created by garen-lee on 2025/6/22.
/**
  ******************************************************************************
  * @file           : L735_asteroidCollision.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/22
  ******************************************************************************
  */
//

#include "L735_asteroidCollision.h"

vector<int> L735_asteroidCollision::asteroidCollision(vector<int> &asteroids) {
    vector<int>st;
    for (auto aster : asteroids) {
        bool alive = true;
        while (alive && aster < 0 && !st.empty() && st.back() > 0) {
            alive = -aster > st.back();
            if (-aster >= st.back()) {
                st.pop_back();
            }
        }
        if (alive) {
            st.push_back(aster);
        }
    }
    return st;
}

void L735_asteroidCollision::test() {
    vector<int> asteroids = {5, 10, -5};
    vector<int> res = asteroidCollision(asteroids);
    print_vector(res);
    asteroids = {8, -8};
    res = asteroidCollision(asteroids);
    print_vector(res);
    asteroids = {10, 2, -5};
    res = asteroidCollision(asteroids);
    print_vector(res);
    asteroids = {8, -8};
    res = asteroidCollision(asteroids);
    print_vector(res);
}