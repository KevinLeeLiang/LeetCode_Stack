//
// Created by garen-lee on 2025/3/9.
/**
  ******************************************************************************
  * @file           : L144_preorderTraversal.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/9
  ******************************************************************************
  */
//

#include "L144_preorderTraversal.h"

vector<int> L144_preorderTraversal::preorderTraversal(TreeNode* root) {
    if (root == nullptr) {
        return {};
    }
    vector<int> res;
    stack<TreeNode*> st;
    st.push(root);
    while (!st.empty()) {
        TreeNode* node = st.top();
        st.pop();
        if (node != nullptr) {
            res.push_back(node->val);
            if (node->right != nullptr) {
                st.push(node->right);
            }
            if (node->left != nullptr) {
                st.push(node->left);
            }
        }
    }
    return res;
}

void L144_preorderTraversal::test() {
    vector<int> nums = {1, -1, 2, 3};
    TreeNode* root = create_treenode(nums, true);
    auto res = preorderTraversal(root);
    print_vector(res);
    nums = {1,2,3,4,5,-1,8,-1,-1,6,7,9};
    root = create_treenode(nums, true);
    res = preorderTraversal(root);
    print_vector(res);
    nums = {};
    root = create_treenode(nums, true);
    res = preorderTraversal(root);
    print_vector(res);
}