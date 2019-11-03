#include "AVLBinarySearchTree.h"
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
    std::vector<int> iv = {1,2,3,4,5,6,7,8,9};
    AVLBST bst;
    Node<int>* tmpnode;
    int i;
    for (i = 0 ; i < iv.size(); ++i){
        bst.BSTInsert(iv[i]);
    }
    tmpnode = bst.GetRoot();
    std::cout << "root : " << bst.GetData(tmpnode) << std::endl;
    std::cout << "left1 : " << bst.GetData(tmpnode->Left) << "right : " << bst.GetData(tmpnode->Right) << std::endl;
    

    for (i = 0 ; i < iv.size(); ++i){
        std::cout << "delete " << iv[i] << std::endl;
        bst.BSTDelete(iv[i]);
        bst.BSTShowAll();
    }

    
    return 0;
}