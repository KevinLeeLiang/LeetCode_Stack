//
// Created by garen-lee on 2025/6/1.
/**
  ******************************************************************************
  * @file           : L590_postorder.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/1
  ******************************************************************************
  */
//

#include "L590_postorder.h"

void L590_postorder::dfs(L590::Node* node, vector<int>& res) {
    if (node == nullptr) {
        return;
    }
    for (auto & ch : node->children) {
        dfs(ch, res);
    }
    res.emplace_back(node->val);
}

vector<int> L590_postorder::postorder(L590::Node* root) {
    vector<int> res;
    dfs(root, res);
    return res;
}


void L590_postorder::test() {
    vector<int> vals = {1, 3, 2, 4,-1, 5, 6};
    L590::Node* root = L590::createNode(vals);
    vector<int> res = postorder(root);
    print_vector(res);
    vals = {1,2,3,4,5,-1,-1,6,7,-1,8,-1,9,10,-1,-1,11,-1,12,-1,13,-1,-1,14};
    root = L590::createNode(vals);
    res = postorder(root);
    print_vector(res);
}