//
// Created by garen-lee on 2025/3/23.
/**
  ******************************************************************************
  * @file           : L173_BSTIterator.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/23
  ******************************************************************************
  */
//

#include "L173_BSTIterator.h"

using namespace L173;

void L173_BSTIterator::test() {
    vector<int> nums = {7, 3, 15, -1, -1, 9, 20};
    TreeNode *root = create_treenode(nums, true);
    BSTIterator *bstIterator = new BSTIterator(root);
    cout << bstIterator->next() << endl;
    cout << bstIterator->next() << endl;
    cout << bstIterator->hasNext() << endl;
    cout << bstIterator->next() << endl;
    cout << bstIterator->hasNext() << endl;
    cout << bstIterator->next() << endl;
    cout << bstIterator->hasNext() << endl;
    cout << bstIterator->next() << endl;
    cout << bstIterator->hasNext() << endl;
}