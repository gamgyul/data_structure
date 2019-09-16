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
    Ch8Tree(Node *rootnode);
    ~Ch8Tree();
    void MakeTreeNode(TData data);
    TData GetData();
    void SetData(Ch8Tree &cur, TData data);

    Ch8Tree& GetLeftSubTree();
    Ch8Tree& GetRightSubTree();
    
    void MakeLeftSubTree( Ch8Tree &sub);
    void MakeRightSubTree(Ch8Tree &sub);
};
#endif // _BINARY_TREE_H
