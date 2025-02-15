//
// Created by garen-lee on 2025/2/15.
/**
  ******************************************************************************
  * @file           : L71_simplifyPath.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/15
  ******************************************************************************
  */
//

#include "L71_simplifyPath.h"

string L71_simplifyPath::simplifyPath(string path) {
    auto split = [](const string& s, char delim) -> vector<string> {
        vector<string> ans;
        string cur;
        for (char ch: s) {
            if (ch == delim) {
                ans.push_back(move(cur));
                cur.clear();
            }
            else {
                cur += ch;
            }
        }
        ans.push_back(move(cur));
        return ans;
    };
    vector<string>names = split(path, '/');
    stack<string>stk;
    for (auto& name: names) {
        if (name == "..") {
            if (!stk.empty()) {
                stk.pop();
            }
        }
        else if (name != "." && !name.empty()) {
            stk.push(name);
        }
    }
    string ans ;
    if (stk.empty()) {
        ans += "/";
    }
    else {
        while (!stk.empty()) {
            ans = "/" + stk.top() + ans;
            stk.pop();
        }
    }
    return ans;
}

void L71_simplifyPath::test() {
    string path = "/home/";
    cout << simplifyPath(path) << endl;
    path = "/home//foo/";
    cout << simplifyPath(path) << endl;
    path = "/home/user/Documents/../Pictures";
    cout << simplifyPath(path) << endl;
    path = "/../";
    cout << simplifyPath(path) << endl;
    path = "/.../a/../b/c/../d/./";
    cout << simplifyPath(path) << endl;
}