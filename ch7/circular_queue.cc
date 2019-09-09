#include "circular_queue.h"

CQueue::CQueue(){
    front = 0;
    rear = 0;
}

CQueue::~CQueue(){}

int CQueue::NextPosIdx(int pos){
    if (pos == QUE_LEN -1)
        return 0;
    else 
        return  (pos + 1);

}

bool CQueue::IsEmpty(){
    if (front == rear)
        return true;
    else
        return false;
}

void CQueue::Enqueue(QData data){
    if(NextPosIdx(rear) == front) {
        std::cout << "Queue full!!" << std::endl;
        return;
    }
    rear = NextPosIdx(rear);
    queArr[rear] = data;
}

QData CQueue::Dequeue(){
    QData rdata;
    if(IsEmpty()){
        std::cout << "Queue empty" << std::endl;
        return 0;
    }
    else {
        front = NextPosIdx(front);
        rdata = queArr[front];
    }
    return rdata;
}

QData CQueue::QPeek(){
    QData rdata;
    
    if(IsEmpty()){
        std::cout << "Queue empty" << std::endl;
        return 0;
    }    
    rdata = queArr[NextPosIdx(front)];
    return rdata;
}