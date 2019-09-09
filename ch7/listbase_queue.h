#ifndef _LIST_QUEUE_H
#define _LIST_QUEUE_H

#include <iostream>

typedef int QData;

struct Node{
    QData data;
    Node* next;    
};

class LQueue{
private:
    Node* front;
    Node* rear;
public:
    LQueue();
    ~LQueue();
    bool IsEmpty();

    void Enqueue(QData data);
    QData Dequeue();
    QData QPeek();
};

#endif // _LIST_QUEUE_H
