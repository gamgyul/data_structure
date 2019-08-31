#ifndef _LIST_H
#define _LIST_H
#include <iostream>
typedef int LData;
class Node{
public:
    LData data;
    Node* next;
    Node* prev;
};
class Ch5List{
private:
    Node* head;
    Node* cur;
    int num_of_node;
public:
    Ch5List();
    ~Ch5List();
    void LInsert(LData data);
    bool LFirst(LData &data);
    bool LNext(LData &data);
    bool LPrev(LData &data);
    int LCount();


};
#endif //_LIST_H