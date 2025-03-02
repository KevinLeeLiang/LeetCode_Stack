//
// Created by garen-lee on 2025/3/2.
/**
  ******************************************************************************
  * @file           : L114_flatten.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/2
  ******************************************************************************
  */
//

#include "L114_flatten.h"

void L114_flatten::flatten(TreeNode* root) {
    TreeNode *curr = root;
    while (curr != nullptr) {
        if (curr->left != nullptr) {
            auto next = curr->left;
            auto predecessor = next;
            while (predecessor->right != nullptr) {
                predecessor = predecessor->right;
            }
            predecessor->right = curr->right;
            curr->left = nullptr;
            curr->right = next;
        }
        curr = curr->right;
    }
}
void L114_flatten::test() {
    vector<int>vals = {1,2,5,3,4,-1,6};
    TreeNode* root = create_treenode(vals, true);
    flatten(root);
    string res = print_tree(root);
    cout << res << endl;
    vals = {};
    root = create_treenode(vals, true);
    flatten(root);
    res = print_tree(root);
    cout << res << endl;
    vals = {1};
    root = create_treenode(vals, true);
    flatten(root);
    res = print_tree(root);
    cout << res << endl;
}