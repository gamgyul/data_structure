#include "Table.h"

int main(){
    Table myTbl;
    Person a(2018078, "yunsu", "donga");
    Person b(2019001, "hamsol", "migum");
    Person c(2017002, "Woong", "Soowon");

    myTbl.SetFunc([](Key k) ->int{return k%100;});
    myTbl.Insert(a.GetID(), a);
    myTbl.Insert(b.GetID(), b);
    myTbl.Insert(c.GetID(), c);

    myTbl.Search(2018078).ShowPerInfo();
    myTbl.Search(2019001).ShowPerInfo();
    myTbl.Search(2017002).ShowPerInfo();
    return 0;

}