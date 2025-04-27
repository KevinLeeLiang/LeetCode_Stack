//
// Created by garen_lee on 2025/4/27.
/**
  ******************************************************************************
  * @file           : L394_decodeString.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/27
  ******************************************************************************
  */
//

#include "L394_decodeString.h"
string L394_decodeString::getDigits(string &s, size_t &ptr) {
    string ret = "";
    while (isdigit(s[ptr])) {
        ret.push_back(s[ptr++]);
    }
    return ret;
}
string L394_decodeString::getString(vector <string> &v) {
    string ret;
    for (const auto &s: v) {
        ret += s;
    }
    return ret;
}
string L394_decodeString::decodeString(string s) {
    vector<string>stk;
    size_t ptr = 0;
    while (ptr < s.size()) {
        char cur = s[ptr];
        if (isdigit(cur)) {
            string digits = getDigits(s, ptr);
            stk.push_back(digits);
        } else if (isalpha(cur) || cur == '[') {
            stk.push_back(string(1, s[ptr]));
            ptr++;
        } else {
            ++ptr;
            vector <string> sub;
            while (stk.back() != "[") {
                sub.push_back(stk.back());
                stk.pop_back();
            }
            reverse(sub.begin(), sub.end());
            // 左括号出栈
            stk.pop_back();
            // 此时栈顶为当前 sub 对应的字符串应该出现的次数
            int repTime = stoi(stk.back());
            stk.pop_back();
            string t, o = getString(sub);
            // 构造字符串
            while (repTime--) t += o;
            // 将构造好的字符串入栈
            stk.push_back(t);
        }
    }
    return getString(stk);
}

void L394_decodeString::test() {
    string s = "3[a]2[bc]";
    cout << decodeString(s) << endl;
    s = "3[a2[c]]";
    cout << decodeString(s) << endl;
    s = "2[abc]3[cd]ef";
    cout << decodeString(s) << endl;
    s = "abc3[cd]xyz";
    cout << decodeString(s) << endl;
}