#ifndef _LIST_H
#define _LIST_H

#include <iostream>

typedef int LData;
class Ch4List;
struct Node{
    LData data;
    Node  *next;
};
class Ch4List{
private:
    Node *head;
    Node *cur;
    Node *before;
    int num_of_node;
public:
Ch4List();
~Ch4List();
void ListInit();
void LInsert(LData data);
bool LFirst(LData *datap);
bool LNext(LData *datap);
LData LRemove();
int LCount();
void SetSortRule(int (*comp)(LData d1, LData d2));

};

#endif // _LIST_H