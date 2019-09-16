#ifndef _LIST_BASE_STACK_H
#define _LIST_BASE_STACK_H
#include <iostream>
#include <string>
#include "BinaryTree3.h"
typedef Node<char> *Data;
class ListNode{ //이래서 이름을 잘지어야되는구나... Node가 겹치네
public:
    Data data;
    ListNode* next;
};
class Ch8Stack{
private:
    ListNode *head;

public:
    Ch8Stack();
    ~Ch8Stack();

    bool IsEmpty();
    void Push(Data data);
    Data Pop();
    Data Peek();

};

#endif // _LIST_BASE_STACK_H