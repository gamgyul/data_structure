#include "BinaryTree3.h"

void print(int a){
    std::cout << a << std::endl;
}

int main(){

    Ch8Tree<int> bt;
    Node<int> *bt1 = bt.MakeTreeNode(); 
    Node<int> *bt2 = bt.MakeTreeNode(); 
    Node<int> *bt3 = bt.MakeTreeNode(); 
    Node<int> *bt4 = bt.MakeTreeNode(); 
    Node<int> *bt5 = bt.MakeTreeNode(); 
    Node<int> *bt6 = bt.MakeTreeNode(); 

    bt.SetData(bt1, 1);
    bt.SetData(bt2, 2);
    bt.SetData(bt3, 3);
    bt.SetData(bt4, 4);
    bt.SetData(bt5, 5);
    bt.SetData(bt6, 6);

    bt.MakeLeftSubTree(bt1, bt2);
    bt.MakeRightSubTree(bt1, bt3);
    bt.MakeLeftSubTree(bt2, bt4);
    bt.MakeRightSubTree(bt2, bt5);
    bt.MakeRightSubTree(bt3, bt6);

    
    std::cout << "inorder" <<std::endl;
    bt.InorderTraverse(bt1, print);
    std::cout << "preorder" <<std::endl;
    bt.PreorderTraverse(bt1, print);
    std::cout << "postorder" <<std::endl;
    bt.PostorderTraverse(bt1, print);

    return 0;
}