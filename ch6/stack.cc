#include "stack.h"
Ch6Stack::Ch6Stack(){
    head = NULL; 
}
Ch6Stack::~Ch6Stack(){

}
// bool Ch6Stack::IsEmpty(){
//     if(head == NULL)
//         return true;
//     else
//         return false;
    
// }

// void Ch6Stack::Push(Data data){
//     Node *NewNode = new Node;
//     NewNode->data = data;
//     NewNode->next = head;
//     head = NewNode;
// }

// Data Ch6Stack::Pop(){
//     Node* tmp;
//     tmp = head;
//     Data rdata = tmp->data;

//     head = head->next;
//     delete tmp;
//     return rdata;
// }

 bool Ch6Stack::IsEmpty(){
    if(clist.LCount() == 0)
        return true;
    else
        return false;
 }
void Ch6Stack::Push(Data data){
    clist.LInsertFirst(data);  
}
Data Ch6Stack::Pop(){
    Data data;
    clist.LFirst(data);
    data = clist.LRemove();
    return data;
}
Data Ch6Stack::Peek(){
    Data rdata;
    if(this->IsEmpty())
        exit(1);
    clist.LFirst(rdata);
    return rdata;
}