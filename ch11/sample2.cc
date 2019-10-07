#include "BinarySearchTree.h"
#include <vector>
void printval(Node<int>* searchnode){
    if(searchnode == NULL)
        std::cout << "No match" << std::endl;
    else
    {
        std::cout << "Node is " << searchnode->data <<std::endl;
    }
    
}

int main(){
    std::vector<int> iv = {139, 13, 12, 790, 82, 5, 99, 74};
    BST bst;
    Node<int>* tmpnode;
    int i;
    for (i = 0 ; i < iv.size(); ++i){
        bst.BSTInsert(iv[i]);
    }
    
    tmpnode = bst.BSTSearch(10);
    printval(tmpnode);

    tmpnode = bst.BSTSearch(13);
    printval(tmpnode);

    tmpnode = bst.BSTSearch(99);
    printval(tmpnode);

    tmpnode = bst.BSTSearch(40);
    printval(tmpnode);

    tmpnode = bst.BSTSearch(139);
    printval(tmpnode);

    tmpnode = bst.BSTSearch(720);
    printval(tmpnode);

    return 0;
}