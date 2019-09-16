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

    bt.SetData(bt1, 1);
    bt.SetData(bt2, 2);
    bt.SetData(bt3, 3);
    bt.SetData(bt4, 4);

    bt.MakeLeftSubTree(bt1, bt2);
    bt.MakeRightSubTree(bt1, bt3);
    bt.MakeLeftSubTree(bt2, bt4);

    std::cout <<  bt.GetData(bt.GetLeftSubTree(bt1)) <<std::endl;
    std::cout <<  bt.GetData(bt.GetLeftSubTree(bt.GetLeftSubTree(bt1))) <<std::endl;

    bt.InorderTraverse(bt1, print);

    return 0;
}