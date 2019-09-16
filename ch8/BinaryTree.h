#ifndef _BINARY_TREE_H
#define _BINARY_TREE_H

#include <iostream>
typedef int TData;

struct Node{
    TData data;
    Node* Left;
    Node* Right;

};

class Ch8Tree{
private:
    Node* root;
public:
    Ch8Tree();
    ~Ch8Tree();
    Node* MakeTreeNode();
    TData GetData(Node* cur);
    void SetData(Node* cur, TData data);

    Node* GetLeftSubTree(Node* cur);
    Node* GetRightSubTree(Node* cur);
    
    void MakeLeftSubTree(Node* main, Node* sub);
    void MakeRightSubTree(Node* main, Node* sub);
};
#endif // _BINARY_TREE_H
