//
// Created by garen-lee on 2025/3/2.
/**
  ******************************************************************************
  * @file           : L94_inorderTraversal.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/2
  ******************************************************************************
  */
//

#include "L94_inorderTraversal.h"

void L94_inorderTraversal::dfs(TreeNode* root, vector<int>& res) {
    if (!root)
        return;
    dfs(root->left, res);
    res.push_back(root->val);
    dfs(root->right, res);
}

vector<int> L94_inorderTraversal::inorderTraversal(TreeNode* root) {
    if (!root)
        return {};
    vector<int> res;
    dfs(root, res);
    return res;
}

void L94_inorderTraversal::test() {
    vector<int> vals;
    vals = {1,-1,2,3};
    TreeNode* root = create_treenode(vals, true);
    vector<int> res = inorderTraversal(root);
    print_vector(res);
    vals = {};
    root = create_treenode(vals, true);
    res = inorderTraversal(root);
    print_vector(res);
    vals = {1};
    root = create_treenode(vals, true);
    res = inorderTraversal(root);
    print_vector(res);
}