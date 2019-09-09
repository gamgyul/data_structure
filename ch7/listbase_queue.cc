#include "listbase_queue.h"

LQueue::LQueue(){
    front = NULL;
    rear = NULL;
}

LQueue::~LQueue(){}



bool LQueue::IsEmpty(){
    if (front == NULL)
        return true;
    else
        return false;
}

void LQueue::Enqueue(QData data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;
    if(IsEmpty()) {
        front = newNode;
        rear = newNode;
    }
    else {
        rear->next = newNode;
        rear = newNode;
    }
    
}

QData LQueue::Dequeue(){
    QData rdata;
    Node* tmp;
    if(IsEmpty()){
        std::cout << "Queue empty" << std::endl;
        return 0;
    }
    else {
        rdata = front->data;
        tmp = front;
        front = front->next;
        delete tmp;
    }
    return rdata;
}

QData LQueue::QPeek(){
    QData rdata;
    
    if(IsEmpty()){
        std::cout << "Queue empty" << std::endl;
        return 0;
    }    
    rdata = front->data;
    return rdata;
}