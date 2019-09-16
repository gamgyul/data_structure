#include "ExpressionTree.h"

int main(){
    std::string exp = "12+7*";
    
    Node<char>* btnode = MakeExpTree(exp);

    ShowInfixTypeExp(btnode);
    std::cout << std::endl;
    ShowPrefixTypeExp(btnode);
    std::cout << std::endl;
    ShowPostfixTypeExp(btnode);

    std::cout << "evaluate value" << EvaluateExpTree(btnode) << std::endl;

    return 0;
}