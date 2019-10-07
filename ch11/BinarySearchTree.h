#ifndef _BINARY_SEARCH_TREE_
#define _BINARY_SEARCH_TREE_
#include "../ch8/BinaryTree3.h"

class BST : public Ch8Tree<int> //상속을 할껀 아닌거같다.
// class BST //
{
private:
    Node<int>* root;
    Node<int>* tmp;
public:
    BST();
    void BSTInsert(int data);
    Node<int>* BSTSearch(int data);
    Node<int>* BSTDelete(int data);
    inline void ChangeLeftSubTree(Node<int>* main, Node<int>* sub){
        main->Left = sub;
    }
    inline void ChangeRightSubTree(Node<int>* main, Node<int>* sub){
        main->Right = sub;
    }
    Node<int>* RemoveLeftSubTree(Node<int>* node); 
    Node<int>* RemoveRightSubTree(Node<int>* node); 
    void BSTShowAll(); //클래스 내부함수니까 안되네;;
};
#endif //_BINARY_SEARCH_TREE_