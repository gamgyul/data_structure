#ifndef _QUEUE_H
#define _QUEUE_H

#include <iostream>
#include "deque.h"
typedef int QData;


class Queue{
private:
    Deque deq;
public:
    Queue(){}
    ~Queue(){}
    bool IsEmpty(){return deq.IsEmpty();}

    void Enqueue(QData data){deq.AddLast(data);}
    QData Dequeue(){return deq.RemoveFirst();}
    QData QPeek(){return deq.GetFirst();}
};

#endif // _QUEUE_H
