//
// Created by garen-lee on 2025/5/11.
/**
  ******************************************************************************
  * @file           : L488_findMinStep.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/11
  ******************************************************************************
  */
//

#ifndef STACK_L488_FINDMINSTEP_H
#define STACK_L488_FINDMINSTEP_H

#include "util.h"

namespace L488 {
    struct State {
        string board;
        string hand;
        int step;

        State(string board, string hand, int step) : board(board), hand(hand), step(step) {}
    };
}
class L488_findMinStep : public LeetcodeStack {
private:
    int findMinStep(string board, string hand);
    string clean(const string & s);
public:
    L488_findMinStep() {}
    void test();
};


#endif //STACK_L488_FINDMINSTEP_H
