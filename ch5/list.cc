#include "list.h"

Ch5List::Ch5List(){
    head = NULL;
    cur = NULL;
}
Ch5List::~Ch5List(){

}
void Ch5List::LInsert(LData data){
    Node* NewNode = new Node;
    NewNode->data = data;
    
    NewNode->next = head;
    NewNode->prev = NULL;
    if (head != NULL)
        head->prev = NewNode;

    head = NewNode;
    num_of_node++;
}

bool Ch5List::LFirst(LData &data){
    if(head == NULL)
        return false;
    cur = head;
    data = cur->data;
    return true;
}

bool Ch5List::LNext(LData &data){
    if (cur->next == NULL)
        return false;
    cur = cur->next;
    data =cur->data;
    return true;
}

bool Ch5List::LPrev(LData &data){
    if (cur->prev == NULL)
        return false;
    cur = cur->prev;
    data =cur->data;
    return true;
}