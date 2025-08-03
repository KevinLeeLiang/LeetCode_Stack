//
// Created by garen-lee on 2025/8/3.
/**
  ******************************************************************************
  * @file           : L853_carFleet.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/8/3
  ******************************************************************************
  */
//

#include "L853_carFleet.h"

int L853_carFleet::carFleet(int target, vector<int> &position, vector<int> &speed) {
    vector<double> time(target + 1);
    for (int i = 0; i < position.size(); i++) {
        time[target - position[i]] = 1.0f * (target - position[i]) / (1.0f * speed[i]);
    }

    vector<double> st;
    for (auto t : time) {
        if (t > 0 && (st.empty() || t > st.back())) st.push_back(t);
    }

    return st.size();
}

void L853_carFleet::test() {
    vector<int> position = {10, 8, 0, 5, 3};
    vector<int> speed = {2, 4, 1, 1, 3};
    int target = 12;
    cout << carFleet(target, position, speed) << endl;
    position = {3};
    speed = {3};
    target = 10;
    cout << carFleet(target, position, speed) << endl;
    position = {0, 2, 4};
    speed = {4, 2, 1};
    target = 100;
    cout << carFleet(target, position, speed) << endl;
}