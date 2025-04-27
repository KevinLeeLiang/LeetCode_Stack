//
// Created by garen_lee on 2025/4/27.
/**
  ******************************************************************************
  * @file           : L388_lengthLongestPath.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/27
  ******************************************************************************
  */
//

#include "L388_lengthLongestPath.h"

int L388_lengthLongestPath::lengthLongestPath(string input) {
    int n = input.size();
    int pos = 0;
    int ans = 0;
    stack<int> st;

    while (pos < n) {
        /* 检测当前文件的深度 */
        int depth = 1;
        while (pos < n && input[pos] == '\t') {
            pos++;
            depth++;
        }
        /* 统计当前文件名的长度 */
        int len = 0;
        bool isFile = false;
        while (pos < n && input[pos] != '\n') {
            if (input[pos] == '.') {
                isFile = true;
            }
            len++;
            pos++;
        }
        /* 跳过换行符 */
        pos++;

        while (st.size() >= depth) {
            st.pop();
        }
        if (!st.empty()) {
            len += st.top() + 1;
        }
        if (isFile) {
            ans = max(ans, len);
        } else {
            st.emplace(len);
        }
    }
    return ans;
}

void L388_lengthLongestPath::test() {
    string input = "dir\n\tsubdir1\n\tsubdir2\n\t\tfile.ext";
    cout << lengthLongestPath(input) << endl;
    input = "dir\n\tsubdir1\n\t\tfile1.ext\n\t\tsubsubdir1\n\tsubdir2\n\t\tsubsubdir2\n\t\t\tfile2.ext";
    cout << lengthLongestPath(input) << endl;
    input = "a";
    cout << lengthLongestPath(input) << endl;
    input = "file1.txt\nfile2.txt\nlongfile.txt";
    cout << lengthLongestPath(input) << endl;
}