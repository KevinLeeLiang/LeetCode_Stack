//
// Created by garen-lee on 2025/6/8.
/**
  ******************************************************************************
  * @file           : L654_constructMaximumBinaryTree.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/8
  ******************************************************************************
  */
//

#ifndef STACK_L654_CONSTRUCTMAXIMUMBINARYTREE_H
#define STACK_L654_CONSTRUCTMAXIMUMBINARYTREE_H

#include "util.h"
class L654_constructMaximumBinaryTree : public LeetcodeStack {
private:
    TreeNode *constructMaximumBinaryTree(vector<int> &nums);
public:
    L654_constructMaximumBinaryTree() {}
    void test();
};


#endif //STACK_L654_CONSTRUCTMAXIMUMBINARYTREE_H
