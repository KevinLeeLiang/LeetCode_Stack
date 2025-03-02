//
// Created by garen-lee on 2025/3/2.
/**
  ******************************************************************************
  * @file           : L114_flatten.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/2
  ******************************************************************************
  */
//

#ifndef STACK_L114_FLATTEN_H
#define STACK_L114_FLATTEN_H

#include "util.h"
class L114_flatten : public LeetcodeStack {
private:
    void flatten(TreeNode *root);
public:
    L114_flatten() {}
    void test();
};


#endif //STACK_L114_FLATTEN_H
