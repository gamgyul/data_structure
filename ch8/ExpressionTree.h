#ifndef _EXPRESSION_TREE_H
#define _EXPRESSION_TREE_H

#include "BinaryTree3.h"
#include "ListBaseStack.h"   //stack도 template로 구현해두었으면 복붙안해도되는데 ...
#include <string>


Node<char>* MakeExpTree(std::string exp);
int EvaluateExpTree (Node<char>* bt);

void ShowPrefixTypeExp(Node<char>* bt);
void ShowInfixTypeExp(Node<char>* bt);
void ShowPostfixTypeExp(Node<char>* bt);

void ShowNodeData(char data);

#endif // _EXPRESSION_TREE_H