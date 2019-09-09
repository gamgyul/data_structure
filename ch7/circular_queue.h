#ifndef _C_QUEUE_H
#define _C_QUEUE_H

#include <iostream>

#define QUE_LEN 100

typedef int QData;
class CQueue{
private:
    int front;
    int rear;
    QData queArr[QUE_LEN];
    int NextPosIdx(int pos);
public:
    CQueue();
    ~CQueue();
    bool IsEmpty();

    void Enqueue(QData data);
    QData Dequeue();
    QData QPeek();
};

#endif // _C_QUEUE_H
