#include "clist.h"
Ch5CList::Ch5CList(){
    tail = NULL;
    cur = NULL;
    before = NULL;
}
Ch5CList::~Ch5CList(){

}
void Ch5CList::LInsert(LData data){
    Node* tmp = new Node;
    tmp->data = data;
    if(tail == NULL){
        tail = tmp;
        tmp->next = tmp;
    }
    else{
        tmp->next =tail->next;
        tail->next = tmp;
        tail = tmp;
    }
    num_of_data++;
}
void Ch5CList::LInsertFirst(LData data){
    Node* tmp = new Node;
    tmp->data = data;
    if(tail == NULL){
        tail = tmp;
        tmp->next = tmp;
    }
    else{
        tmp->next =tail->next;
        tail->next = tmp;
    }
    num_of_data++;
}

bool Ch5CList::LFirst(LData *datap){
    
    if(tail == NULL)
        return false;
    cur = tail->next;
    datap = &cur->data;
    return true;
}
bool Ch5CList::LFirst(LData &data){
    
    if(tail == NULL)
        return false;
    cur = tail->next;
    data = cur->data;
    return true;
}
bool Ch5CList::LNext(LData *datap){
    
    if(tail == NULL)
        return false;
    before = cur;
    cur = cur->next;
    datap = &cur->data;
    return true;
}
bool Ch5CList::LNext(LData &data){
    
    if(tail == NULL)
        return false;
    before = cur;
    cur = cur->next;
    data = cur->data;
    return true;
}
LData Ch5CList::LRemove(){
    Node *tmp;
    LData rdata;
    tmp =cur;
    rdata = tmp->data;
    if(cur == cur->next){
        cur = NULL;
    }
    else if(cur == tail){
        tail = before;
    }
    before->next = cur->next;
    delete (tmp);
    cur = before;
    num_of_data--;
    return rdata;
}
int Ch5CList::LCount(){
    return num_of_data;
}