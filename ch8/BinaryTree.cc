#include "BinaryTree.h"

Ch8Tree::Ch8Tree(){
    root = NULL;
}
Ch8Tree::~Ch8Tree(){
}

Node* Ch8Tree::MakeTreeNode(){
    Node *newNode = new Node;
    newNode->Left = NULL;
    newNode->Right = NULL;

    return newNode;
}

TData Ch8Tree::GetData(Node* cur){
    return cur->data;
}

void Ch8Tree::SetData(Node* cur, TData data){
    cur->data = data;
}

Node* Ch8Tree::GetLeftSubTree(Node* cur){
    return cur->Left;
}

Node* Ch8Tree::GetRightSubTree(Node* cur){
    return cur->Right;
}

void Ch8Tree::MakeLeftSubTree(Node* main, Node* sub){
    main->Left = sub;
}

void Ch8Tree::MakeRightSubTree(Node* main, Node* sub){
    main->Right = sub;
}