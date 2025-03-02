//
// Created by garen-lee on 2025/3/2.
/**
  ******************************************************************************
  * @file           : L94_inorderTraversal.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/2
  ******************************************************************************
  */
//

#ifndef STACK_L94_INORDERTRAVERSAL_H
#define STACK_L94_INORDERTRAVERSAL_H

#include "util.h"
class L94_inorderTraversal : public LeetcodeStack {
private:
    vector<int> inorderTraversal(TreeNode *root);
    void dfs(TreeNode *root, vector<int> &res);
public:
    L94_inorderTraversal() {}
    void test();

};


#endif //STACK_L94_INORDERTRAVERSAL_H
