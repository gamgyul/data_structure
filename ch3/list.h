#ifndef _LIST_H
#define _LIST_H

#define MAX_ARRAY_SIZE 10
#include <iostream>
#include "name_card.h"
 typedef NameCard LData;
//typedef int LData;
class Ch3List{
private:
    LData data_array[MAX_ARRAY_SIZE];
    int num_of_data;
    int cur_position;
public: 
    Ch3List();
    ~Ch3List();
    void LInsert(LData data);
    bool LFirst(LData &data);
    bool LNext(LData &data);
    LData LDelete();
    int LCount();

};
typedef Ch3List List;
#endif