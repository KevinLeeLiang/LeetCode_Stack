//
// Created by garen-lee on 2025/6/8.
/**
  ******************************************************************************
  * @file           : L654_constructMaximumBinaryTree.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/8
  ******************************************************************************
  */
//

#include "L654_constructMaximumBinaryTree.h"

TreeNode* L654_constructMaximumBinaryTree::constructMaximumBinaryTree(vector<int>& nums) {
    int n = nums.size();
    vector<int> stk;
    vector<TreeNode*> tree(n);
    for (int i = 0; i < n; ++i) {
        tree[i] = new TreeNode(nums[i]);
        while (!stk.empty() && nums[i] > nums[stk.back()]) {
            tree[i]->left = tree[stk.back()];
            stk.pop_back();
        }
        if (!stk.empty()) {
            tree[stk.back()]->right = tree[i];
        }
        stk.push_back(i);
    }
    return tree[stk[0]];
}

void L654_constructMaximumBinaryTree::test() {
    vector<int> nums = {3, 2, 1, 6, 0, 5};
    TreeNode* root = constructMaximumBinaryTree(nums);
    cout << print_tree(root) << endl;
    nums = {3, 2, 1};
    root = constructMaximumBinaryTree(nums);
    cout << print_tree(root) << endl;
}