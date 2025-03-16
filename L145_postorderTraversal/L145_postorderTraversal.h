//
// Created by garen-lee on 2025/3/16.
/**
  ******************************************************************************
  * @file           : L145_postorderTraversal.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/16
  ******************************************************************************
  */
//

#ifndef STACK_L145_POSTORDERTRAVERSAL_H
#define STACK_L145_POSTORDERTRAVERSAL_H

#include "util.h"
class L145_postorderTraversal : public LeetcodeStack {
private:
    vector<int> postorderTraversal(TreeNode* root) ;
    void postorder(TreeNode* root, vector<int>& res);
public :
    L145_postorderTraversal() {}
    void test();
};


#endif //STACK_L145_POSTORDERTRAVERSAL_H
