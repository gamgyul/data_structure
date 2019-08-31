#include "dlist.h"

Ch4List::Ch4List(){
    head = new Node;
    head->next =NULL;
    cur = NULL;
    before = NULL;
    num_of_node = 0;
    comp = NULL;
}
Ch4List::~Ch4List(){

}
void Ch4List::LInsert(LData data){
    if (comp == NULL)
        FInsert(data);
    else
        SInsert(data);
}
void Ch4List::FInsert(LData data){
    Node *tmp;
    tmp = new Node;
    tmp->next = head->next;
    head->next = tmp;
    tmp->data = data;
    num_of_node++;
}
void Ch4List::SInsert(LData data){
    Node *tmp = new Node;
    tmp->data = data;
    Node *pred = head;

    while(pred->next != NULL && comp(tmp->data, pred->next->data) != 0)
    {
        pred = pred->next;
    }
    tmp->next = pred->next;
    pred->next = tmp;
    num_of_node++;
}
bool Ch4List::LFirst(LData *datap){
    if(head == NULL)
        return false;
    
    cur = head->next;
    before = head;
    *datap = cur->data;
    datap = &(cur->data);
    return true;

}

bool Ch4List::LNext(LData *datap){
    if(head == NULL || cur->next == NULL)
        return false;
    before = cur;
    cur = cur->next;
    *datap = cur->data;
    return true;
}
LData Ch4List::LRemove(){
    Node *tmp;
    LData data;
    
    tmp = cur;
    data = tmp->data;
    before->next = cur->next;
    delete(tmp);
    cur = before;
    num_of_node--;
    return data;
}
int Ch4List::LCount(){
    return num_of_node;
}
void Ch4List::SetSortRule(int (*a_comp)(LData data1, LData data2)){
    comp = a_comp;
}