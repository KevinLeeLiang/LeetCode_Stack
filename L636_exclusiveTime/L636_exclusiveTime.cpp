//
// Created by garen-lee on 2025/6/8.
/**
  ******************************************************************************
  * @file           : L636_exclusiveTime.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/8
  ******************************************************************************
  */
//

#include "L636_exclusiveTime.h"

vector<int> L636_exclusiveTime::exclusiveTime(int n, vector<string> &logs) {
    stack<pair<int, int>> st;
    vector<int> res(n, 0);
    for (auto &log : logs) {
        char type[10];
        int idx, timestamp;
        sscanf(log.c_str(), "%d:%[^:]:%d", &idx, type, &timestamp);
        if (type[0] == 's') {
            if (!st.empty()) {
                res[st.top().first] += timestamp - st.top().second;
                st.top().second = timestamp;
            }
            st.emplace(idx, timestamp);
        } else {
            auto t = st.top();
            st.pop();
            res[t.first] += timestamp - t.second + 1;
            if (!st.empty()) {
                st.top().second = timestamp + 1;
            }
        }
    }
    return res;
}

void L636_exclusiveTime::test() {
    int n = 2;
    vector<string> logs = {"0:start:0", "1:start:2", "1:end:5", "0:end:6"};
    vector<int> res = exclusiveTime(n, logs);
    print_vector(res);
    n = 1;
    logs = {"0:start:0", "0:start:2", "0:end:5", "0:start:6", "0:end:6", "0:end:7"};
    res = exclusiveTime(n, logs);
    print_vector(res);
    n = 2;
    logs = {"0:start:0", "0:start:2", "0:end:5", "1:start:6", "1:end:6", "0:end:7"};
    res = exclusiveTime(n, logs);
    print_vector(res);
}