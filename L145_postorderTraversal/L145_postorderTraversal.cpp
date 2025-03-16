//
// Created by garen-lee on 2025/3/16.
/**
  ******************************************************************************
  * @file           : L145_postorderTraversal.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/16
  ******************************************************************************
  */
//

#include "L145_postorderTraversal.h"

void L145_postorderTraversal::postorder(TreeNode* root, vector<int>& res) {
    if (!root) {
        return;
    }
    postorder(root->left, res);
    postorder(root->right, res);
    res.push_back(root->val);
}

vector<int>  L145_postorderTraversal::postorderTraversal(TreeNode* root)  {
    if (!root) {
        return {};
    }
    vector<int> res;
    postorder(root, res);
    return res;
}

void L145_postorderTraversal::test() {
    vector<int> vals = {1, -1, 2 ,3};
    TreeNode* root = create_treenode(vals, true);
    vector<int> res = postorderTraversal(root);
    print_vector(res);
    vals = {1,2,3,4,5,-1,8,-1,-1,6,7,9};
    root = create_treenode(vals, true);
    res = postorderTraversal(root);
    print_vector(res);
    vals = {};
    root = create_treenode(vals, true);
    res = postorderTraversal(root);
    print_vector(res);
    vals = {1};
    root = create_treenode(vals, true);
    res = postorderTraversal(root);
    print_vector(res);
}