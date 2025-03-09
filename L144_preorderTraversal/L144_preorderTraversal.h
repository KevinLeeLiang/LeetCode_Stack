//
// Created by garen-lee on 2025/3/9.
/**
  ******************************************************************************
  * @file           : L144_preorderTraversal.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/9
  ******************************************************************************
  */
//

#ifndef STACK_L144_PREORDERTRAVERSAL_H
#define STACK_L144_PREORDERTRAVERSAL_H

#include "util.h"
class L144_preorderTraversal : public LeetcodeStack {
private:
    vector<int> preorderTraversal(TreeNode *root);
public:
    L144_preorderTraversal() {}
    void test();
};


#endif //STACK_L144_PREORDERTRAVERSAL_H
