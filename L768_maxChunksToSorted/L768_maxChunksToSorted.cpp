//
// Created by garen-lee on 2025/7/6.
/**
  ******************************************************************************
  * @file           : L768_maxChunksToSorted.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/6
  ******************************************************************************
  */
//

#include "L768_maxChunksToSorted.h"

int L768_maxChunksToSorted::maxChunksToSorted(vector<int>& arr) {
    stack<int> st;
    for (auto &num : arr) {
        if (st.empty() || st.top() <= num) {
            st.push(num);
        } else {
            int top = st.top();
            st.pop();
            while (!st.empty() && st.top() > num) {
                st.pop();
            }
            st.push(top);
        }
    }
    return st.size();
}

void L768_maxChunksToSorted::test() {
    vector<int> arr = {5,4,3,2,1};
    cout << maxChunksToSorted(arr) << endl;
    arr = {2,1,3,4,4};
    cout << maxChunksToSorted(arr) << endl;
}