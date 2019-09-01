#include "PostCaculator.h"
int EvalRPNExp (std::string exp){
    Ch6Stack stack;
    char num1;
    char num2;
    for(const char c:exp){
        if(isdigit(c))
            stack.Push(c-'0');
        else
        {
                num2 = stack.Pop();
                num1 = stack.Pop();
            switch(c){
                case '+':
                    stack.Push(num1+num2);
                    break;
                case '-':
                    stack.Push(num1-num2);
                    break;
                case '*':
                    stack.Push(num1*num2);
                    break;
                case '/':
                    stack.Push(num1/num2);
                    break;
                default:
                    std::cerr << " wrong character" << std::endl;
                    break;
            }
        }
    }
    int num;
    num = static_cast<int> (stack.Pop());
    return num;
}

