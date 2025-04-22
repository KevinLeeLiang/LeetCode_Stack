//
// Created by garen-lee on 2025/4/20.
/**
  ******************************************************************************
  * @file           : L331_isValidSerialization.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/20
  ******************************************************************************
  */
//

#ifndef STACK_L331_ISVALIDSERIALIZATION_H
#define STACK_L331_ISVALIDSERIALIZATION_H

#include "util.h"
class L331_isValidSerialization : public LeetcodeStack {
private:
    bool isValidSerialization(string preorder);
public:
    L331_isValidSerialization() {}
    void test();
};


#endif //STACK_L331_ISVALIDSERIALIZATION_H
