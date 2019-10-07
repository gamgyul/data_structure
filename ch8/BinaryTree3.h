#ifndef _BINARY_TREE3_H
#define _BINARY_TREE3_H

#include <iostream>


template <typename T>
struct Node{
    T data;
    Node* Left;
    Node* Right;
};

template <typename T>
class Ch8Tree{
protected:
    Node<T>* root;

public:
    typedef void (*VisitFuncPtr) (T data);
    Ch8Tree<T>();
    ~Ch8Tree<T>();
    Node<T>* MakeTreeNode();
    T GetData(Node<T>* cur);
    void SetData(Node<T>* cur, T data);

    Node<T>* GetLeftSubTree(Node<T>* cur);
    Node<T>* GetRightSubTree(Node<T>* cur);
    
    void MakeLeftSubTree(Node<T>* main, Node<T>* sub);
    void MakeRightSubTree(Node<T>* main, Node<T>* sub);

    void DeleteTree(Node<T>* cur);

    void InorderTraverse(Node<T>* cur, VisitFuncPtr action);
    void PreorderTraverse(Node<T>* cur, VisitFuncPtr action);
    void PostorderTraverse(Node<T>* cur, VisitFuncPtr action);
};

#include "BinaryTree3.cc"
#endif // _BINARY_TREE3_H

