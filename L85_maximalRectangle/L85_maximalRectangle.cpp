//
// Created by garen-lee on 2025/2/23.
/**
  ******************************************************************************
  * @file           : L85_maximalRectangle.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/23
  ******************************************************************************
  */
//

#include "L85_maximalRectangle.h"

int L85_maximalRectangle::maximalRectangle(vector<vector<char>>& matrix) {
    int m = matrix.size(), n = matrix[0].size();
    if (m == 0)
        return 0;
    vector<vector<int>> left(m, vector<int>(n, 0));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == '1') {
                left[i][j] = (j == 0 ? 0 : left[i][j - 1]) + 1;
            }
        }
    }
    print_vector_vector(left);
    int res = 0;
    for (int j = 0; j < n; j++) {
        vector<int> up (m, 0), down (m, 0);
        stack<int> stk;
        for (int i = 0; i < m; i++) {
            while (!stk.empty() && left[stk.top()][j] >= left[i][j])
                stk.pop();
            up[i] = stk.empty() ? -1 : stk.top();
            stk.push(i);
        }
        stk = stack<int>();
        for (int i = m - 1; i >= 0; i--) {
            while (!stk.empty() && left[stk.top()][j] >= left[i][j])
                stk.pop();
            down[i] = stk.empty() ? m : stk.top();
            stk.push(i);
        }
        for (int i = 0; i < m; i++) {
            int height = down[i] - up[i] - 1;
            int area = height * left[i][j];
            res = max(res, area);
        }
    }
    return res;
}

void L85_maximalRectangle::test() {
    vector<vector<char>> matrix = {
            {'1', '0', '1', '0', '0'},
            {'1', '0', '1', '1', '1'},
            {'1', '1', '1', '1', '1'},
            {'1', '0', '0', '1', '0'}
    };
    cout << maximalRectangle(matrix) << endl;
    matrix = {{'0'}};
    cout << maximalRectangle(matrix) << endl;
    matrix = {{'1'}};
    cout << maximalRectangle(matrix) << endl;
}