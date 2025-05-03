//
// Created by garen-lee on 2025/5/4.
/**
  ******************************************************************************
  * @file           : L402_removeKdigits.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/4
  ******************************************************************************
  */
//

#ifndef STACK_L402_REMOVEKDIGITS_H
#define STACK_L402_REMOVEKDIGITS_H

#include "util.h"
class L402_removeKdigits : public LeetcodeStack {
private:
    string removeKdigits(string num, int k);
public:
    L402_removeKdigits() {}
    void test();
};


#endif //STACK_L402_REMOVEKDIGITS_H
