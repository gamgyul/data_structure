#include "AVLBinarySearchTree.h"
AVLBST::AVLBST(){
    root = NULL;
    tmp = NULL;
}

void AVLBST::BSTInsert(int data){
    Node<int> *parent;
    if(root == NULL){
        root = MakeTreeNode();
        root->data = data;
        // tmp = root;
        return;
    }
    tmp = root;
    while(tmp != NULL){
        parent = tmp;
        if (parent->data >= data)
            tmp = GetLeftSubTree(parent);
        else
            tmp = GetRightSubTree(parent);
    }
    
    if(parent->data >= data){
        parent->Left = MakeTreeNode();
        parent->Left->data = data;
    }
    else {
        parent->Right = MakeTreeNode();
        parent->Right->data = data;
    }
    root = Rebalance(root);
}

Node<int>* AVLBST::BSTSearch(int data){
    Node<int>* searchp = root;

    while(searchp != NULL) {
        if(searchp->data == data)
            return searchp;
        if(searchp->data > data)
            searchp = GetLeftSubTree(searchp);
        else
            searchp = GetRightSubTree(searchp);
    }
    return NULL;

}
Node<int>* AVLBST::RemoveLeftSubTree(Node<int>* node){
    Node<int>* rnode = NULL;
    if(node != NULL){
        rnode = node->Left;
        node->Left = NULL;
    }
    return rnode;
}
Node<int>* AVLBST::RemoveRightSubTree(Node<int>* node){
    Node<int>* rnode = NULL;
    if(node != NULL){
        rnode = node->Right;
        node->Right = NULL;
    }
    return rnode;
}
Node<int>* AVLBST::BSTDelete(int target){
    Node<int> *dnode, *vroot, *pnode, *cnode;

    vroot = MakeTreeNode();
    // dnode = BSTSearch(data);
    vroot->Right = root;
    pnode =vroot;
    cnode = root;
    //삭제 대상노드 및 부모노드 찾기
    while(cnode != NULL && cnode->data != target){
        pnode = cnode;
        if(target > cnode->data)
            cnode = cnode->Right;
        else
            cnode = cnode->Left;
    }

    if (cnode == NULL)
        return NULL;
//단말노드 제거
    if(cnode->Left == NULL && cnode->Right == NULL) {
        if(cnode == pnode->Left)
            dnode = RemoveLeftSubTree(pnode);
        else
            dnode =RemoveRightSubTree(pnode);
    }
// 자식노드한개일때 제거
    else if(cnode->Left == NULL || cnode->Right == NULL) {
        Node<int> *dcnode;
        if(cnode->Left == NULL)
            dcnode = cnode->Right;
        else 
            dcnode = cnode->Left;
        if(cnode == pnode->Left) {
            dnode = RemoveLeftSubTree(pnode);
            pnode->Left = dcnode;
        }
        else {
            dnode = RemoveRightSubTree(pnode);
            pnode->Right = dcnode;    
        }
    }
    else {
        int deldata = cnode->data;
        Node<int> *mnode, *mpnode;
        mnode = cnode->Right;
        mpnode = cnode;
        while(mnode->Left != NULL) {
            mpnode = mnode;
            mnode = mnode->Left;
        }
        cnode->data = mnode->data;    
        if(cnode == mpnode)
            mpnode->Right = mnode->Right;
        else 
            mpnode->Left = mnode->Right;    
        dnode = mnode;
        mnode->data = deldata;
    }
    if(vroot->Right != root)
        root = vroot->Right;
    delete vroot;

    root = Rebalance(root);

    return dnode;
}
int AVLBST::GetHeight(Node<int>* node){
    int leftH, rightH;

    if(node == NULL)
        return 0;
    leftH = GetHeight(node->Left);
    rightH = GetHeight(node->Right);

    if(leftH > rightH)
        return leftH + 1;
    else
        return rightH + 1;
}
int AVLBST::GetHeightDiff(Node<int>* node){
    int leftH, rightH;
    if(node == NULL)
        return 0;
    leftH = GetHeight(node->Left);
    rightH = GetHeight(node->Right);

    return leftH - rightH;
}

Node<int> *AVLBST::RotateLL(Node<int>* node){
    Node<int> *pnode, *cnode;
    pnode = node;
    cnode = node->Left;
    pnode->Left = cnode->Right;
    cnode->Right = pnode;

    return cnode;
}
Node<int> *AVLBST::RotateRR(Node<int>* node){
    Node<int> *pnode, *cnode;
    pnode = node;
    cnode = node->Right;
    pnode->Right = cnode->Left;
    cnode->Left = pnode;

    return cnode;
}
Node<int> *AVLBST::RotateLR(Node<int>* node){
    Node<int> *pnode, *cnode;
    pnode = node;
    cnode = pnode->Left;
    pnode->Left = RotateRR(cnode);
    return RotateLL(pnode);    
}
Node<int> *AVLBST::RotateRL(Node<int>* node){
    Node<int> *pnode, *cnode;
    pnode = node;
    cnode = pnode->Right;
    pnode->Right = RotateLL(cnode);
    return RotateRR(pnode);    
}
Node<int> *AVLBST::Rebalance(Node<int> *node){
    int hDiff = GetHeightDiff(node);
    if(hDiff > 1) {
        if(GetHeightDiff(node->Left) > 0)
            node = RotateLL(node);
        else
            node = RotateLR(node);
    }
    if(hDiff < -1) {
        if(GetHeightDiff(node->Right) < 0)
            node = RotateRR(node);
        else
            node = RotateRL(node);
    }
    return node;
}
void showintdata(int data){std::cout << data << std::endl;}

void AVLBST::BSTShowAll(){InorderTraverse(root, showintdata);} //클래스 내부함수니까 안되네;;
