#ifndef _LIST_H
#define _LIST_H

#include <iostream>
#include "point.h"
// typedef int LData;
typedef Point LData;
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
    int (*comp) (LData d1, LData d2);
    void FInsert(LData data);
    void SInsert(LData data);
public:
    Ch4List();
    ~Ch4List();
    void ListInit();
    void LInsert(LData data);
    bool LFirst(LData *datap);
    bool LNext(LData *datap);
LData LRemove();
int LCount();
void SetSortRule(int (*a_comp)(LData d1, LData d2));

};

#endif // _LIST_H