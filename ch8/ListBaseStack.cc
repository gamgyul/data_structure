#include "ListBaseStack.h"
Ch8Stack::Ch8Stack(){
    head = NULL; 
}
Ch8Stack::~Ch8Stack(){

}
bool Ch8Stack::IsEmpty(){
    if(head == NULL)
        return true;
    else
        return false;
    
}

void Ch8Stack::Push(Data data){
    ListNode *NewNode = new ListNode;
    NewNode->data = data;
    NewNode->next = head;
    head = NewNode;
}

Data Ch8Stack::Pop(){
    ListNode* tmp;
    tmp = head;
    Data rdata = tmp->data;

    head = head->next;
    delete tmp;
    return rdata;
}

Data Ch8Stack::Peek(){
    return head->data;
}
//  bool Ch8Stack::IsEmpty(){
//     if(clist.LCount() == 0)
//         return true;
//     else
//         return false;
//  }
// void Ch8Stack::Push(Data data){
//     clist.LInsertFirst(data);  
// }
// Data Ch8Stack::Pop(){
//     Data data;
//     clist.LFirst(data);
//     data = clist.LRemove();
//     return data;
// }
// Data Ch8Stack::Peek(){
//     Data rdata;
//     if(this->IsEmpty())
//         exit(1);
//     clist.LFirst(rdata);
//     return rdata;
// }