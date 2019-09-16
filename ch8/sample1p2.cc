#include "BinaryTree2.h"

int main(){

    Ch8Tree bt1;
    Ch8Tree bt2;
    Ch8Tree bt3;
    Ch8Tree bt4;
    
    bt1.MakeTreeNode(1);
    bt2.MakeTreeNode(2);
    bt3.MakeTreeNode(3);
    bt4.MakeTreeNode(4);

    bt1.MakeLeftSubTree(bt2);
    bt1.MakeRightSubTree(bt3);
    bt2.MakeLeftSubTree(bt4);

    std::cout <<  (bt1.GetLeftSubTree()).GetData() <<std::endl;
    std::cout <<  bt1.GetLeftSubTree().GetLeftSubTree().GetData() <<std::endl;

    return 0;
}