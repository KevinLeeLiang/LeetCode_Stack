//
// Created by garen-lee on 2025/4/20.
/**
  ******************************************************************************
  * @file           : L331_isValidSerialization.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/20
  ******************************************************************************
  */
//

#include "L331_isValidSerialization.h"

bool L331_isValidSerialization::isValidSerialization(string preorder) {
    int n = preorder.size();
    int i = 0;
    stack<int>stk;
    stk.push(1);
    while (i < n) {
        if (stk.empty()) {
            return false;
        }
        if (preorder[i] == ',') {
            i++;
        }else if (preorder[i] == '#') {
            stk.top() -= 1;
            if (stk.top() == 0) {
                stk.pop();
            }
            i++;
        } else {
            while (i < n && preorder[i] != ',') {
                i++;
            }
            stk.top() -= 1;
            if (stk.top() == 0) {
                stk.pop();
            }
            stk.push(2);
        }
    }
    return stk.empty();
}

void L331_isValidSerialization::test()
{
    string preorder = "9,3,4,#,#,1,#,#,2,#,6,#,#";
    bool res = isValidSerialization(preorder);
    cout << res << endl;
    preorder = "1,#";
    res = isValidSerialization(preorder);
    cout << res << endl;
    preorder = "9,#,#,1";
    res = isValidSerialization(preorder);
    cout << res << endl;
}