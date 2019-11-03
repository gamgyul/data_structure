#ifndef _AVL_BINARY_SEARCH_TREE_
#define _AVL_BINARY_SEARCH_TREE_
#include "../ch8/BinaryTree3.h"

class AVLBST : public Ch8Tree<int> //상속을 할껀 아닌거같다.
// class BAVLST //
{
private:
    Node<int>* root;
    Node<int>* tmp;
public:
    AVLBST();
    Node<int> *GetRoot(){ return root;}
    void BSTInsert(int data);
    Node<int>* BSTSearch(int data);
    Node<int>* BSTDelete(int data);
    inline void ChangeLeftSubTree(Node<int>* main, Node<int>* sub){
        main->Left = sub;
    }
    inline void ChangeRightSubTree(Node<int>* main, Node<int>* sub){
        main->Right = sub;
    }
    Node<int> *RemoveLeftSubTree(Node<int>* node); 
    Node<int> *RemoveRightSubTree(Node<int>* node); 
    Node<int> *Rebalance(Node<int> *node);
    int GetHeight(Node<int>* node);
    int GetHeightDiff(Node<int>* node);
    Node<int> *RotateLL(Node<int>* node);
    Node<int> *RotateRR(Node<int>* node);
    Node<int> *RotateLR(Node<int>* node);
    Node<int> *RotateRL(Node<int>* node);


    void BSTShowAll(); //클래스 내부함수니까 안되네;;
};
#endif //_AVL_BINARY_SEARCH_TREE_