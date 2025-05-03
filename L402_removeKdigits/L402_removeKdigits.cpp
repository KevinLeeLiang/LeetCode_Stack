//
// Created by garen-lee on 2025/5/4.
/**
  ******************************************************************************
  * @file           : L402_removeKdigits.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/4
  ******************************************************************************
  */
//

#include "L402_removeKdigits.h"

string L402_removeKdigits::removeKdigits(string num, int k) {
    vector<char> stk;
    for (auto& digit: num) {
        while (stk.size() > 0 && stk.back() > digit && k) {
            stk.pop_back();
            k -= 1;
        }
        stk.push_back(digit);
    }

    for (; k > 0; --k) {
        stk.pop_back();
    }

    string ans = "";
    bool isLeadingZero = true;
    for (auto& digit: stk) {
        if (isLeadingZero && digit == '0') {
            continue;
        }
        isLeadingZero = false;
        ans += digit;
    }
    return ans == "" ? "0" : ans;
}

void L402_removeKdigits::test() {
    string num = "1432219";
    int k = 3;
    string res = removeKdigits(num, k);
    cout << res << endl;
    num = "10200";
    k = 1;
    res = removeKdigits(num, k);
    cout << res << endl;
    num = "10";
    k = 2;
    res = removeKdigits(num, k);
    cout << res << endl;
    num = "9";
    k = 1;
    res = removeKdigits(num, k);
    cout << res << endl;
}