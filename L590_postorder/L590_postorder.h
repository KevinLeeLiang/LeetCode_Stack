//
// Created by garen-lee on 2025/6/1.
/**
  ******************************************************************************
  * @file           : L590_postorder.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/1
  ******************************************************************************
  */
//

#ifndef STACK_L590_POSTORDER_H
#define STACK_L590_POSTORDER_H

#include "util.h"

namespace L590 {
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
inline Node* createNode(vector<int> vals) {
    if (vals.empty()) return nullptr;

    queue<Node*> q;
    Node* root = new Node(vals[0]);
    q.push(root);

    int index = 1;
    while (index < vals.size()) {
        Node* parent = q.front();
        q.pop();

        while (index < vals.size() && vals[index] != -1) {
            Node* child = new Node(vals[index]);
            parent->children.push_back(child);
            q.push(child);
            index++;
        }
        // 跳过 -1
        index++;
    }

    return root;
}
}

class L590_postorder : public LeetcodeStack {
private:
    vector<int> postorder(L590::Node* root);
    void dfs(L590::Node* node, vector<int>& res);
public:
    L590_postorder() {}
    void test();
};


#endif //STACK_L590_POSTORDER_H
