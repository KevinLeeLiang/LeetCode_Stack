//
// Created by garen-lee on 2025/5/25.
/**
  ******************************************************************************
  * @file           : L589_preorder.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/25
  ******************************************************************************
  */
//

#ifndef STACK_L589_PREORDER_H
#define STACK_L589_PREORDER_H
#include "util.h"
namespace L589 {
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
    inline Node* create_node(vector<int> node_vals, bool is_include_zero) {
        if (node_vals.size() == 0)
            return nullptr;
        queue<Node *> q;
        Node *root = new Node(node_vals[0]);
        int index = 0;
        q.push(root);
        index++;
        index++;
        while (!q.empty()) {
            if (index >= node_vals.size())
                break;
            auto p = q.front();
            q.pop();
            while (index < node_vals.size() && node_vals[index] >= 0) {
                auto node = new Node(node_vals[index]);
                p->children.push_back(node);
                q.push(node);
                index++;
            }
            index++;
        }
        return root;
    }
}

class L589_preorder : public LeetcodeStack {
    vector<int> preorder(L589::Node* root) ;
    void dfs(L589::Node* root, vector<int>& res);
public:
    L589_preorder() {}
    void test();
};


#endif //STACK_L589_PREORDER_H
