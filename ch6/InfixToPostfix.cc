#include "InfixToPostfix.h"

std::string ConvToRPNExp(std::string s)
{
    std::string rstring;
    Ch6Stack stack;
    for (const char c:s){
        if(isdigit(c))
            rstring.push_back(c);
        else
        {
            switch(c)
            {
                case ' ':
                    continue;
                case '*':
                case '/':
                case '+':
                case '-':
                    while(!stack.IsEmpty() && CompOperator(c, stack.Peek()) <= 0)
                        rstring.push_back(stack.Pop());
                    stack.Push(c);
                    break;
                case '(':
                    stack.Push(c);
                    break;
                case ')':
                    while(CompOperator('(', stack.Peek()) != 0)
                        rstring.push_back(stack.Pop());
                    stack.Pop();
            }
        }
    }
    while(!stack.IsEmpty())
        rstring.push_back(stack.Pop());
    return rstring;
}

int GetOpPriority(const char ch){

    switch(ch)
    {
        case '*':
        case '/':
            return 5;
        case '+':
        case '-':
            return 3;
        case '(':
            return 1;
        default:
            return -1;
    }
}
int CompOperator(const char op1, const char op2)
{
    int op1priority = GetOpPriority(op1);
    int op2priority = GetOpPriority(op2);

    if (op1priority > op2priority)
        return 1;
    else if(op1priority < op2priority)
        return -1;
    else 
        return 0;
}