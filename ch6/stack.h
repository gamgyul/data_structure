#ifndef _STACK_H
#define _STACK_H
#include <iostream>
#include <string>
#include "clist.h"
typedef char Data;
// class Node{
// public:
//     Data data;
//     Node* next;
// };
class Ch6Stack{
private:
    Node *head;
    Ch6CList clist;

public:
    Ch6Stack();
    ~Ch6Stack();

    bool IsEmpty();
    void Push(Data data);
    Data Pop();
    Data Peek();

};

#endif // _STACK_H