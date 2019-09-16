// #include "BinaryTree3.h" 
/* template 빌드가 안된다.. template은 헤더에 다 정의가 되어있어야만 된다고한다. 
왜냐면 template라는것이 모든 타입에 대해서 클래스를 생성하는것이 아니라 코드에서 사용되는 타입에 대해서만 클래스가 생성되는것인데
cpp 파일에다가 정의하게 되면 실제로 그 클래스를 사용하는쪽에서 어느타입을 사용하는지 알 수 가 없음 */
template <typename T>
Ch8Tree<T>::Ch8Tree(){
    root = NULL;
}
template <typename T>
Ch8Tree<T>::~Ch8Tree(){
}

template <typename T>
Node<T>* Ch8Tree<T>::MakeTreeNode(){
    Node<T> *newNode = new Node<T>;
    newNode->Left = NULL;
    newNode->Right = NULL;

    return newNode;
}

template <typename T>
T Ch8Tree<T>::GetData(Node<T>* cur){
    return cur->data;
}

template <typename T>
void Ch8Tree<T>::SetData(Node<T>* cur, T data){
    cur->data = data;
}
template <typename T>
Node<T>* Ch8Tree<T>::GetLeftSubTree(Node<T>* cur){
    return cur->Left;
}
template <typename T>
Node<T>* Ch8Tree<T>::GetRightSubTree(Node<T>* cur){
    return cur->Right;
}
template <typename T>
void Ch8Tree<T>::MakeLeftSubTree(Node<T>* main, Node<T>* sub){
    DeleteTree(main->Left);
    main->Left = sub;
}
template <typename T>
void Ch8Tree<T>::MakeRightSubTree(Node<T>* main, Node<T>* sub){
    DeleteTree(main->Right);
    main->Right = sub;
}



template <typename T>
void Ch8Tree<T>::DeleteTree(Node<T>* cur){ // PostorderTraverse 그대로 활용해서 하려고했는데 받는 인자가 data타입이라 불가능...
//    PostorderTraverse(cur, delete_func)
    if (cur == NULL)
        return;
    DeleteTree(cur->Left);
    DeleteTree(cur->Right);
    delete cur;
}


template <typename T>
void Ch8Tree<T>::InorderTraverse(Node<T>* cur, VisitFuncPtr action){
    if (cur == NULL)
        return;
    if(cur->Left != NULL || cur->Right != NULL)  
        std::cout << "(" << std::endl;
    InorderTraverse(cur->Left, action);
    action(cur->data);
    InorderTraverse(cur->Right, action);
    if(cur->Left != NULL || cur->Right != NULL)      
        std::cout << ")" << std::endl;
}
template <typename T>
void Ch8Tree<T>::PreorderTraverse(Node<T>* cur, VisitFuncPtr action){
    if (cur == NULL)
        return;  
    action(cur->data);
    PreorderTraverse(cur->Left, action);
    PreorderTraverse(cur->Right, action);
}
template <typename T>
void Ch8Tree<T>::PostorderTraverse(Node<T>* cur, VisitFuncPtr action){
    if (cur == NULL)
        return;  
    PostorderTraverse(cur->Left, action);
    PostorderTraverse(cur->Right, action);
    action(cur->data);

}