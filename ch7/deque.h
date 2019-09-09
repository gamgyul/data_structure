#ifndef _DEQUEUE_H
#define _DEQUEUE_H

#include <iostream>

typedef int QData;

struct Node{
    QData data;
    Node* next;
    Node* prev;    
};

class Deque{
private:
    Node* front;
    Node* rear;
public:
    Deque();
    ~Deque();
    bool IsEmpty();

    void AddFirst(QData data);
    void AddLast(QData data);
    QData RemoveFirst();
    QData RemoveLast();
    QData GetFirst();
    QData GetLast();
};

#endif // _DEQUEUE_H
