//
// Created by garen-lee on 2025/4/13.
/**
  ******************************************************************************
  * @file           : L316_removeDuplicateLetters.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/13
  ******************************************************************************
  */
//

#include "L316_removeDuplicateLetters.h"

string L316_removeDuplicateLetters::removeDuplicateLetters(string s) {
    vector<int> vis(26), num(26);
    for (auto ch : s) {
        num[ch - 'a']++;
    }
    string stk;
    for (auto ch : s) {
        if (!vis[ch - 'a']) {
            while (!stk.empty() && stk.back() > ch) {
                if (num[stk.back() - 'a'] > 0) {
                    vis[stk.back() - 'a'] = 0;
                    stk.pop_back();
                } else {
                    break;
                }
            }
            vis[ch - 'a'] = 1;
            stk.push_back(ch);
        }
        num[ch - 'a'] -= 1;
    }
    return stk;
}

void L316_removeDuplicateLetters::test() {
    string s = "bcabc";
    cout <<  removeDuplicateLetters(s) << endl;
    s = "cbacdcbc";
    cout <<  removeDuplicateLetters(s) << endl;
}