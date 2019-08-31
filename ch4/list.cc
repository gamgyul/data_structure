#include "list.h"

Ch4List::Ch4List(){
    head = NULL;
    cur = NULL;
    before = NULL;
    num_of_node = 0;
}
Ch4List::~Ch4List(){

}
void Ch4List::LInsert(LData data){
    Node *tmp;

    tmp = new Node;
    if(head == cur)
        head = tmp;
    tmp->data = data;
    tmp->next = cur;
    cur = tmp;
    num_of_node++;
}
bool Ch4List::LFirst(LData *datap){
    if(head == NULL)
        return false;
    
    cur = head;
    *datap = cur->data;
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
    if(head == NULL)
        return 0;
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