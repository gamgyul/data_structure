#include "BinaryTree.h"

int main(){

    Ch8Tree bt;
    Node *bt1 = bt.MakeTreeNode(); 
    Node *bt2 = bt.MakeTreeNode(); 
    Node *bt3 = bt.MakeTreeNode(); 
    Node *bt4 = bt.MakeTreeNode(); 

    bt.SetData(bt1, 1);
    bt.SetData(bt2, 2);
    bt.SetData(bt3, 3);
    bt.SetData(bt4, 4);

    bt.MakeLeftSubTree(bt1, bt2);
    bt.MakeRightSubTree(bt3, bt4);
    bt.MakeLeftSubTree(bt2, bt4);

    std::cout <<  bt.GetData(bt.GetLeftSubTree(bt1)) <<std::endl;
    std::cout <<  bt.GetData(bt.GetLeftSubTree(bt.GetLeftSubTree(bt1))) <<std::endl;

    return 0;
}