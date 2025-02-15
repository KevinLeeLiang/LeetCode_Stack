cmake_minimum_required(VERSION 3.17)
project(Stack)

set(CMAKE_CXX_STANDARD 17)
include_directories(util)
add_executable(Stack main.cpp test_factory.h util/util.h L20_isValid/L20_isValid.cpp L20_isValid/L20_isValid.h L32_longestValidParentheses/L32_longestValidParentheses.cpp L32_longestValidParentheses/L32_longestValidParentheses.h L42_trap/L42_trap.cpp L42_trap/L42_trap.h L71_simplifyPath/L71_simplifyPath.cpp L71_simplifyPath/L71_simplifyPath.h)