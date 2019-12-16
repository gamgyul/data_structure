#ifndef _STACK_H
#define _STACK_H
#include <iostream>
#include <string>
// #include "clist.h"
typedef int Data;
class SNode{
public:
    Data data;
    SNode* next;
};
class Ch6Stack{
private:
    SNode *head;
    // Ch6CList clist;

public:
    Ch6Stack();
    ~Ch6Stack();

    bool IsEmpty();
    void Push(Data data);
    Data Pop();
    Data Peek();

};

#endif // _STACK_H