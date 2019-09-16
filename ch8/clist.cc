#include "clist.h"
Ch6CList::Ch6CList(){
    tail = NULL;
    cur = NULL;
    before = NULL;
    num_of_data = 0 ;
}
Ch6CList::~Ch6CList(){

}
void Ch6CList::LInsert(LData data){
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
void Ch6CList::LInsertFirst(LData data){
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

bool Ch6CList::LFirst(LData *datap){
    
    if(tail == NULL)
        return false;
    cur = tail->next;
    before = tail;
    datap = &cur->data;
    return true;
}
bool Ch6CList::LFirst(LData &data){
    
    if(tail == NULL)
        return false;
    cur = tail->next;
    before = tail;
    data = cur->data;
    return true;
}
bool Ch6CList::LNext(LData *datap){
    
    if(tail == NULL)
        return false;
    before = cur;
    cur = cur->next;
    datap = &cur->data;
    return true;
}
bool Ch6CList::LNext(LData &data){
    
    if(tail == NULL)
        return false;
    before = cur;
    cur = cur->next;
    data = cur->data;
    return true;
}
LData Ch6CList::LRemove(){
    Node *tmp;
    LData rdata;
    tmp =cur;
    rdata = tmp->data;
    if(cur == cur->next){
        tail = NULL;
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
int Ch6CList::LCount(){
    return num_of_data;
}