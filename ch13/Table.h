#ifndef _TABLE_H_
#define _TABLE_H_

#define MAX_TBL 100

#include "Person.h"


class Table {
private:
    Slot tbl[MAX_TBL];
    std::function<int(Key)> Hashfunc;
public:
    Table();
    ~Table(){}

    void SetFunc(std::function<int(Key)> func){Hashfunc = func;}
    void Insert(Key k, Value v);
    Value Delete(Key k);
    Value Search(Key k);
};


#endif // _TABLE_H_