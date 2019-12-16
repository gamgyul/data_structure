#ifndef _D_LIST_H
#define _D_LIST_H
#include <iostream>
typedef int LData;
class Node{
public:
    LData data;
    Node* next;
    Node* prev;
};
class Ch5DList{
private:
    Node* head;
    Node* tail;
    Node* cur;
    int num_of_node;
public:
    Ch5DList();
    ~Ch5DList();
    void LInsert(LData data);
    bool LFirst(LData &data);
    bool LNext(LData &data);
    bool LPrev(LData &data);
    LData LRemove();
    int LCount();


};
#endif //_D_LIST_H