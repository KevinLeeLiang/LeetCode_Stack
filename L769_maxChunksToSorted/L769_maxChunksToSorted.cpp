//
// Created by garen-lee on 2025/7/6.
/**
  ******************************************************************************
  * @file           : L769_maxChunksToSorted.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/6
  ******************************************************************************
  */
//

#include "L769_maxChunksToSorted.h"

int L769_maxChunksToSorted::maxChunksToSorted(vector<int>& arr) {
    auto sortedArr = arr;
    sort(sortedArr.begin(), sortedArr.end());
    unordered_map<int, int> cnt;
    int res = 0;
    for (int i = 0; i < sortedArr.size(); i++) {
        int x = arr[i], y = sortedArr[i];
        cnt[x]++;
        if (cnt[x] == 0) {
            cnt.erase(x);
        }
        cnt[y]--;
        if (cnt[y] == 0) {
            cnt.erase(y);
        }
        if (cnt.size() == 0) {
            res++;
        }
    }
    return res;
}

void L769_maxChunksToSorted::test() {
    vector<int> arr = {4,3,2,1,0};
    cout << maxChunksToSorted(arr) << endl;
    arr = {1,0,2,3,4};
    cout << maxChunksToSorted(arr) << endl;
}