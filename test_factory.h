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
class test_factory {

private:
    void buildSolution(string title) {
        if (title == "L20") {
            std::shared_ptr<L20_isValid> tmp= std::make_shared<L20_isValid>();
            solution_ = std::dynamic_pointer_cast<LeetcodeStack>(tmp);
        } else if (title == "L32") {
            std::shared_ptr<L32_longestValidParentheses> tmp= std::make_shared<L32_longestValidParentheses>();
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
