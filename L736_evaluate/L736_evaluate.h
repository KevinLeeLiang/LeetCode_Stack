//
// Created by garen-lee on 2025/6/29.
/**
  ******************************************************************************
  * @file           : L736_evaluate.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/29
  ******************************************************************************
  */
//

#ifndef STACK_L736_EVALUATE_H
#define STACK_L736_EVALUATE_H

#include "util.h"

enum ExprStatus {
    VALUE = 0, // 初始状态
    NONE,      // 表达式类型未知
    LET,       // let 表达式
    LET1,      // let 表达式已经解析了 vi 变量
    LET2,      // let 表达式已经解析了最后一个表达式 expr
    ADD,       // add 表达式
    ADD1,      // add 表达式已经解析了 e1 表达式
    ADD2,      // add 表达式已经解析了 e2 表达式
    MULT,      // mult 表达式
    MULT1,     // mult 表达式已经解析了 e1 表达式
    MULT2,     // mult 表达式已经解析了 e2 表达式
    DONE       // 解析完成
};

struct Expr {
    ExprStatus status;
    string var; // let 的变量 vi
    int value; // VALUE 状态的数值，或者 LET2 状态最后一个表达式的数值
    int e1, e2; // add 或 mult 表达式的两个表达式 e1 和 e2 的数值

    Expr(ExprStatus s) {
        status = s;
    }
};

class L736_evaluate : public LeetcodeStack {
private:
    unordered_map<string, vector<int>> scope;
private:
    int evaluate(string expression);
    int calculateToken(const string &token);
public:
    L736_evaluate() {}
    void test();
};


#endif //STACK_L736_EVALUATE_H
