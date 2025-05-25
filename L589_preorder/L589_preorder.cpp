//
// Created by garen-lee on 2025/5/25.
/**
  ******************************************************************************
  * @file           : L589_preorder.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/25
  ******************************************************************************
  */
//

#include "L589_preorder.h"


void L589_preorder::dfs(L589::Node* root, vector<int>& res) {
    if (root == nullptr) {
        return;
    }
    res.push_back(root->val);
    for (auto child: root->children) {
        dfs(child, res);
    }
}

vector<int> L589_preorder::preorder(L589::Node* root) {
    vector<int> res;
    dfs(root, res);
    return res;
}

void L589_preorder::test() {
    vector<int> node_vals = {1,-1, 3, 2,4,-1, 5, 6};
    L589::Node* root = L589::create_node(node_vals, true);
    vector<int> res = preorder(root);
    print_vector(res);
    node_vals = {1,-1,2,3,4,5,-1,-1,6,7,-1,8,-1,9,10,-1,-1,11,-1,12,-1,13,-1,-1,14};
    root = L589::create_node(node_vals, true);
    res = preorder(root);
    print_vector(res);
}