#ifndef _INFIX_TO_POSTFIX
#define _INFIX_TO_POSTFIX
#include <iostream>
#include <string>
#include "stack.h" 
#include <cctype>

std::string ConvToRPNExp(std::string s);
int GetOpPriority(const char ch);
int CompOperator(const char op1, const char op2);

#endif // _INFIX_TO_POSTFIX