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
#include "L227_calculate/L227_calculate.h"
#include "L232_MyQueue/L232_MyQueue.h"
#include "L234_isPalindrome/L234_isPalindrome.h"
#include "L316_removeDuplicateLetters/L316_removeDuplicateLetters.h"
#include "L321_maxNumber/L321_maxNumber.h"
#include "L331_isValidSerialization/L331_isValidSerialization.h"
#include "L388_lengthLongestPath/L388_lengthLongestPath.h"
#include "L394_decodeString/L394_decodeString.h"
#include "L402_removeKdigits/L402_removeKdigits.h"
#include "L445_addTwoNumbers/L445_addTwoNumbers.h"
#include "L456_find132pattern/L456_find132pattern.h"
#include "L488_findMinStep/L488_findMinStep.h"
#include "L496_nextGreaterElement/L496_nextGreaterElement.h"
#include "L503_nextGreaterElements/L503_nextGreaterElements.h"
#include "L581_findUnsortedSubarray/L581_findUnsortedSubarray.h"
#include "L589_preorder/L589_preorder.h"
#include "L590_postorder/L590_postorder.h"
#include "L591_isValid/L591_isValid.h"
#include "L636_exclusiveTime/L636_exclusiveTime.h"
#include "L654_constructMaximumBinaryTree/L654_constructMaximumBinaryTree.h"
#include "L678_checkValidString/L678_checkValidString.h"
#include "L682_calPoints/L682_calPoints.h"
#include "L726_countOfAtoms/L726_countOfAtoms.h"
#include "L735_asteroidCollision/L735_asteroidCollision.h"

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
        } else if (title == "L227") {
            std::shared_ptr<L227_calculate> tmp= std::make_shared<L227_calculate>();
            solution_ = std::dynamic_pointer_cast<LeetcodeStack>(tmp);
        } else if (title == "L232") {
            std::shared_ptr<L232_MyQueue> tmp= std::make_shared<L232_MyQueue>();
            solution_ = std::dynamic_pointer_cast<LeetcodeStack>(tmp);
        } else if (title == "L234") {
            std::shared_ptr<L234_isPalindrome> tmp= std::make_shared<L234_isPalindrome>();
            solution_ = std::dynamic_pointer_cast<LeetcodeStack>(tmp);
        } else if (title == "L316") {
            std::shared_ptr<L316_removeDuplicateLetters> tmp= std::make_shared<L316_removeDuplicateLetters>();
            solution_ = std::dynamic_pointer_cast<LeetcodeStack>(tmp);
        } else if (title == "L321") {
            std::shared_ptr<L321_maxNumber> tmp= std::make_shared<L321_maxNumber>();
            solution_ = std::dynamic_pointer_cast<LeetcodeStack>(tmp);
        } else if (title == "L331") {
            std::shared_ptr<L331_isValidSerialization> tmp= std::make_shared<L331_isValidSerialization>();
            solution_ = std::dynamic_pointer_cast<LeetcodeStack>(tmp);
        } else if (title == "L388") {
            std::shared_ptr<L388_lengthLongestPath> tmp= std::make_shared<L388_lengthLongestPath>();
            solution_ = std::dynamic_pointer_cast<LeetcodeStack>(tmp);
        } else if (title == "L394") {
            std::shared_ptr<L394_decodeString> tmp= std::make_shared<L394_decodeString>();
            solution_ = std::dynamic_pointer_cast<LeetcodeStack>(tmp);
        } else if (title == "L402") {
            std::shared_ptr<L402_removeKdigits> tmp= std::make_shared<L402_removeKdigits>();
            solution_ = std::dynamic_pointer_cast<LeetcodeStack>(tmp);
        } else if (title == "L445") {
            std::shared_ptr<L445_addTwoNumbers> tmp= std::make_shared<L445_addTwoNumbers>();
            solution_ = std::dynamic_pointer_cast<LeetcodeStack>(tmp);
        } else if (title == "L456") {
            std::shared_ptr<L456_find132pattern> tmp= std::make_shared<L456_find132pattern>();
            solution_ = std::dynamic_pointer_cast<LeetcodeStack>(tmp);
        } else if (title == "L488") {
            std::shared_ptr<L488_findMinStep> tmp= std::make_shared<L488_findMinStep>();
            solution_ = std::dynamic_pointer_cast<LeetcodeStack>(tmp);
        } else if (title == "L496") {
            std::shared_ptr<L496_nextGreaterElement> tmp= std::make_shared<L496_nextGreaterElement>();
            solution_ = std::dynamic_pointer_cast<LeetcodeStack>(tmp);
        } else if (title == "L503") {
            std::shared_ptr<L503_nextGreaterElements> tmp= std::make_shared<L503_nextGreaterElements>();
            solution_ = std::dynamic_pointer_cast<LeetcodeStack>(tmp);
        } else if (title == "L581") {
            std::shared_ptr<L581_findUnsortedSubarray> tmp= std::make_shared<L581_findUnsortedSubarray>();
            solution_ = std::dynamic_pointer_cast<LeetcodeStack>(tmp);
        } else if (title == "L589") {
            std::shared_ptr<L589_preorder> tmp= std::make_shared<L589_preorder>();
            solution_ = std::dynamic_pointer_cast<LeetcodeStack>(tmp);
        } else if  (title == "L590") {
            std::shared_ptr<L590_postorder> tmp= std::make_shared<L590_postorder>();
            solution_ = std::dynamic_pointer_cast<LeetcodeStack>(tmp);
        } else if (title == "L591") {
            std::shared_ptr<L591_isValid> tmp= std::make_shared<L591_isValid>();
            solution_ = std::dynamic_pointer_cast<LeetcodeStack>(tmp);
        } else if (title == "L636") {
            std::shared_ptr<L636_exclusiveTime> tmp= std::make_shared<L636_exclusiveTime>();
            solution_ = std::dynamic_pointer_cast<LeetcodeStack>(tmp);
        } else if (title == "L654") {
            std::shared_ptr<L654_constructMaximumBinaryTree> tmp= std::make_shared<L654_constructMaximumBinaryTree>();
            solution_ = std::dynamic_pointer_cast<LeetcodeStack>(tmp);
        } else if (title == "L678") {
            std::shared_ptr<L678_checkValidString> tmp= std::make_shared<L678_checkValidString>();
            solution_ = std::dynamic_pointer_cast<LeetcodeStack>(tmp);
        } else if (title == "L682") {
            std::shared_ptr<L682_calPoints> tmp= std::make_shared<L682_calPoints>();
            solution_ = std::dynamic_pointer_cast<LeetcodeStack>(tmp);
        } else if (title == "L726") {
            std::shared_ptr<L726_countOfAtoms> tmp= std::make_shared<L726_countOfAtoms>();
            solution_ = std::dynamic_pointer_cast<LeetcodeStack>(tmp);
        } else if (title == "L735") {
            std::shared_ptr<L735_asteroidCollision> tmp= std::make_shared<L735_asteroidCollision>();
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
