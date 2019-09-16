
#include "ExpressionTree.h"
#include <string>
#include <cctype>

Node<char>* MakeExpTree(std::string exp){
    Ch8Stack st;
    Ch8Tree<char> bt;
    Node<char>* btnode;


    for (char c:exp){
        btnode = bt.MakeTreeNode();
        if (isdigit(c))
        {   
            
            bt.SetData(btnode, c-'0');
        }
        else
        {   
            bt.SetData(btnode, c);
            bt.MakeRightSubTree(btnode, st.Pop());
            bt.MakeLeftSubTree(btnode, st.Pop());
        }
        st.Push(btnode);
    }

    return st.Pop();
}
int EvaluateExpTree (Node<char>* btnode){
    int op1, op2;
    if (btnode->Left == NULL && btnode->Right == NULL)
        return static_cast<int>(btnode->data);
    op1 = EvaluateExpTree(btnode->Left); 
    op2 = EvaluateExpTree(btnode->Right);
    switch(btnode->data){
        case '+':
            return op1+op2;
        case '-':
            return op1-op2;
        case '*':
            return op1*op2;
        case '/':
            return op1/op2;
        default:
            std::cout <<" Evaluate Error" << std::endl;
            return 0;
    }
    return 0;
}

void ShowPrefixTypeExp(Node<char>* btnode){
    Ch8Tree<char> bt;
    bt.PreorderTraverse(btnode, ShowNodeData);
}
void ShowInfixTypeExp(Node<char>* btnode){
    Ch8Tree<char> bt;
    bt.InorderTraverse(btnode, ShowNodeData);
}
void ShowPostfixTypeExp(Node<char>* btnode){
    Ch8Tree<char> bt;
    bt.PostorderTraverse(btnode, ShowNodeData);
}

void ShowNodeData(char data){
    if (isdigit(data +'0'))
        std::cout << static_cast<int>(data) << std::endl;
    else
    {
        std::cout << data << std::endl;           
    }
    
}