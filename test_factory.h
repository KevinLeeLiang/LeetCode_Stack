//
// Created by garen-lee on 2025/2/1.
/**
  ******************************************************************************
  * @file           : test_factory.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/1
  ******************************************************************************
  */
//

#ifndef STACK_TEST_FACTORY_H
#define STACK_TEST_FACTORY_H
#include <memory>
#include "L20_isValid/L20_isValid.h"
#include "L32_longestValidParentheses/L32_longestValidParentheses.h"
#include "L42_trap/L42_trap.h"
#include "L71_simplifyPath/L71_simplifyPath.h"
#include "L84_largestRectangleArea/L84_largestRectangleArea.h"
#include "L85_maximalRectangle/L85_maximalRectangle.h"
#include "L94_inorderTraversal/L94_inorderTraversal.h"
#include "L114_flatten/L114_flatten.h"
#include "L143_recorderList/L143_recorderList.h"
#include "L144_preorderTraversal/L144_preorderTraversal.h"
#include "L145_postorderTraversal/L145_postorderTraversal.h"
#include "L150_evalRPN/L150_evalRPN.h"
#include "L155_MinStack/L155_MinStack.h"
#include "L173_BSTIterator/L173_BSTIterator.h"
#include "L224_calculate/L224_calculate.h"
#include "L225_MyStack/L225_MyStack.h"

class test_factory {

private:
    void buildSolution(string title) {
        if (title == "L20") {
            std::shared_ptr<L20_isValid> tmp= std::make_shared<L20_isValid>();
            solution_ = std::dynamic_pointer_cast<LeetcodeStack>(tmp);
        } else if (title == "L32") {
            std::shared_ptr<L32_longestValidParentheses> tmp= std::make_shared<L32_longestValidParentheses>();
            solution_ = std::dynamic_pointer_cast<LeetcodeStack>(tmp);
        } else if (title == "L42") {
            std::shared_ptr<L42_trap> tmp= std::make_shared<L42_trap>();
            solution_ = std::dynamic_pointer_cast<LeetcodeStack>(tmp);
        } else if (title == "L71") {
            std::shared_ptr<L71_simplifyPath> tmp= std::make_shared<L71_simplifyPath>();
            solution_ = std::dynamic_pointer_cast<LeetcodeStack>(tmp);
        } else if (title == "L84") {
            std::shared_ptr<L84_largestRectangleArea> tmp= std::make_shared<L84_largestRectangleArea>();
            solution_ = std::dynamic_pointer_cast<LeetcodeStack>(tmp);
        } else if (title == "L85") {
            std::shared_ptr<L85_maximalRectangle> tmp= std::make_shared<L85_maximalRectangle>();
            solution_ = std::dynamic_pointer_cast<LeetcodeStack>(tmp);
        } else if (title == "L94") {
            std::shared_ptr<L94_inorderTraversal> tmp= std::make_shared<L94_inorderTraversal>();
            solution_ = std::dynamic_pointer_cast<LeetcodeStack>(tmp);
        } else if (title == "L114") {
            std::shared_ptr<L114_flatten> tmp= std::make_shared<L114_flatten>();
            solution_ = std::dynamic_pointer_cast<LeetcodeStack>(tmp);
        } else if (title == "L143") {
            std::shared_ptr<L143_recorderList> tmp= std::make_shared<L143_recorderList>();
            solution_ = std::dynamic_pointer_cast<LeetcodeStack>(tmp);
        } else if (title == "L144") {
            std::shared_ptr<L144_preorderTraversal> tmp= std::make_shared<L144_preorderTraversal>();
            solution_ = std::dynamic_pointer_cast<LeetcodeStack>(tmp);
        } else if (title == "L145") {
            std::shared_ptr<L145_postorderTraversal> tmp= std::make_shared<L145_postorderTraversal>();
            solution_ = std::dynamic_pointer_cast<LeetcodeStack>(tmp);
        } else if (title == "L150") {
            std::shared_ptr<L150_evalRPN> tmp= std::make_shared<L150_evalRPN>();
            solution_ = std::dynamic_pointer_cast<LeetcodeStack>(tmp);
        } else if (title == "L155") {
            std::shared_ptr<L155_MinStack> tmp= std::make_shared<L155_MinStack>();
            solution_ = std::dynamic_pointer_cast<LeetcodeStack>(tmp);
        } else if (title == "L173") {
            std::shared_ptr<L173_BSTIterator> tmp= std::make_shared<L173_BSTIterator>();
            solution_ = std::dynamic_pointer_cast<LeetcodeStack>(tmp);
        } else if (title == "L224") {
            std::shared_ptr<L224_calculate> tmp= std::make_shared<L224_calculate>();
            solution_ = std::dynamic_pointer_cast<LeetcodeStack>(tmp);
        } else if (title == "L225") {
            std::shared_ptr<L225_MyStack> tmp= std::make_shared<L225_MyStack>();
            solution_ = std::dynamic_pointer_cast<LeetcodeStack>(tmp);
        }
    }
public:
    test_factory(string title) {
        cout << "test " << title << endl;
        buildSolution(title);
    }
    void test() {
        solution_->test();
    }
    ~test_factory() {}

private:
    std::shared_ptr<LeetcodeStack> solution_;
};
#endif //STACK_TEST_FACTORY_H
