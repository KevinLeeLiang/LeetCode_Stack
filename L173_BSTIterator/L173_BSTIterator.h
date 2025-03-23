//
// Created by garen-lee on 2025/3/23.
/**
  ******************************************************************************
  * @file           : L173_BSTIterator.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/23
  ******************************************************************************
  */
//

#ifndef STACK_L173_BSTITERATOR_H
#define STACK_L173_BSTITERATOR_H

#include "util.h"

namespace L173 {
    class BSTIterator {
    public:
        BSTIterator(TreeNode *root) : cur(root){ }
        int next() {
            while (cur != nullptr) {
                stk.push(cur);
                cur = cur->left;
            }
            cur = stk.top();
            stk.pop();
            int ret = cur->val;
            cur = cur->right;
            return ret;
        }
        bool hasNext() {
            return cur != nullptr || !stk.empty();
        }

    private:
        TreeNode* cur;
        stack<TreeNode*> stk;
    };
}

class L173_BSTIterator : public LeetcodeStack {
public:
    L173_BSTIterator() {}
    void test();
};


#endif //STACK_L173_BSTITERATOR_H
