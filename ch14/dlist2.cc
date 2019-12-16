#include "dlist.h"

Ch5DList::Ch5DList(){
    head = new Node;
    tail = new Node;
    head->next = tail;
    tail ->prev = head;
    cur = NULL;
}
Ch5DList::~Ch5DList(){

}
void Ch5DList::LInsert(LData data){
    Node* NewNode = new Node;
    NewNode->data = data;
    
    NewNode->prev = tail->prev;
    NewNode->prev->next = NewNode;
    NewNode->next = tail;
    tail->prev = NewNode;
    num_of_node++;
}

bool Ch5DList::LFirst(LData &data){
    if(head->next == tail)
        return false;
    cur = head->next;
    data = cur->data;
    return true;
}

bool Ch5DList::LNext(LData &data){
    if (cur->next == tail)
        return false;
    cur = cur->next;
    data =cur->data;
    return true;
}

bool Ch5DList::LPrev(LData &data){
    if (cur->prev == head)
        return false;
    cur = cur->prev;
    data =cur->data;
    return true;
}

LData Ch5DList::LRemove(){
    Node *tmp;
    LData rdata;
    tmp =cur;
    rdata = tmp->data;
    cur->prev->next = cur->next;
    cur->next->prev = cur->prev;
    cur = cur->prev;
    delete(tmp);
    num_of_node--;
    return rdata;
}