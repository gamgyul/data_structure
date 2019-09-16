#include "BinaryTree2.h"
//BinaryTree Node 관리가 class 같지 않아서 고민중..
//노드 대신 클래스 그대로 사용하기로..
Ch8Tree::Ch8Tree(){
    root = NULL;
}
Ch8Tree::Ch8Tree(Node* rootnode){
    root = rootnode;
}
Ch8Tree::~Ch8Tree(){
}

void Ch8Tree::MakeTreeNode(TData data){
    Node *newNode = new Node;
    newNode->data = data;
    newNode->Left = NULL;
    newNode->Right = NULL;

    root = newNode;
}

TData Ch8Tree::GetData(){
    return root->data;
}

void Ch8Tree::SetData(Ch8Tree &cur, TData data){
    cur.root->data = data;
}

Ch8Tree& Ch8Tree::GetLeftSubTree(){
    Ch8Tree *lst = new Ch8Tree(root->Left);
    return *lst;
}

Ch8Tree& Ch8Tree::GetRightSubTree(){
    Ch8Tree *rst = new Ch8Tree(root->Right);
    return *rst;
}

void Ch8Tree::MakeLeftSubTree(Ch8Tree &sub){
    root->Left = sub.root;
}

void Ch8Tree::MakeRightSubTree(Ch8Tree &sub){
    root->Right = sub.root;
}