#include "deque.h"

Deque::Deque(){
    front = NULL;
    rear = NULL;
}
Deque::~Deque(){}



bool Deque::IsEmpty(){
    if ((front == NULL) || (rear == NULL)) // empty 조건???
        return true;
    else
        return false;
}

void Deque::AddLast(QData data) { //바뀌었네 ㅋㅋ
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    if(IsEmpty()) {
        front = newNode;
        rear = newNode;
    }
    else {
        rear->next = newNode;
        newNode->prev = rear;
        rear = newNode;
    }
}

void Deque::AddFirst(QData data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    if(IsEmpty()) {
        front = newNode;
        rear = newNode;
    }
    else {
        front->prev = newNode;
        newNode->next = front;
        front = newNode;
    }
}
QData Deque::RemoveFirst(){
    QData rdata;
    Node* tmp;
    if(IsEmpty()){
        std::cout << "Queue empty" << std::endl;
        return 0;
    }
    else {
        rdata = front->data;
        tmp = front;
        if(front->next!=NULL)
            front->next->prev = NULL;
        else
            rear = NULL;
        front = front->next;
        delete tmp;
    }
    return rdata;
}

QData Deque::RemoveLast(){
    QData rdata;
    Node* tmp;
    if(IsEmpty()){
        std::cout << "Queue empty" << std::endl;
        return 0;
    }
    else {
        rdata = rear->data;
        tmp = rear;
        if(rear->prev!=NULL)
            rear->prev->next = NULL;
        else
            front = NULL;
        rear = rear->prev;
        delete tmp;
    }
    return rdata;
}
QData Deque::GetFirst(){
    QData rdata;
    
    if(IsEmpty()){
        std::cout << "Queue empty" << std::endl;
        return 0;
    }    
    rdata = front->data;
    return rdata;
}

QData Deque::GetLast(){
    QData rdata;
    
    if(IsEmpty()){
        std::cout << "Queue empty" << std::endl;
        return 0;
    }    
    rdata = rear->data;
    return rdata;
}