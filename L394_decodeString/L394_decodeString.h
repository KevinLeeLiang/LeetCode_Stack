//
// Created by garen_lee on 2025/4/27.
/**
  ******************************************************************************
  * @file           : L394_decodeString.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/27
  ******************************************************************************
  */
//

#ifndef STACK_L394_DECODESTRING_H
#define STACK_L394_DECODESTRING_H

#include "util.h"
class L394_decodeString : public LeetcodeStack {
private:
    string decodeString(string s) ;
    string getDigits(string &s, size_t &ptr);
    string getString(vector <string> &v);
public:
    L394_decodeString() {}
    void test();
};


#endif //STACK_L394_DECODESTRING_H
