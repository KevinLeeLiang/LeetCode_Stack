//
// Created by garen-lee on 2025/6/1.
/**
  ******************************************************************************
  * @file           : L591_isValid.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/1
  ******************************************************************************
  */
//

#ifndef STACK_L591_ISVALID_H
#define STACK_L591_ISVALID_H

#include "util.h"
class L591_isValid : public LeetcodeStack {
private:
    bool isValid(string code);
public:
    L591_isValid() {}
    void test();
};


#endif //STACK_L591_ISVALID_H
