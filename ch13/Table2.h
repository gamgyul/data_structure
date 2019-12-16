#ifndef _TABLE2_H_
#define _TABLE2_H_

#define MAX_TBL 100

#include "Person2.h"
#include "dlist.h"

class Table2 {
private:
    Ch5DList tbl[MAX_TBL];
    std::function<int(Key)> Hashfunc;
public:
    Table2();
    ~Table2(){}

    void SetFunc(std::function<int(Key)> func){Hashfunc = func;}
    void Insert(Key k, Value v);
    Value Delete(Key k);
    Value Search(Key k);
};

Table2::Table2(){
    int i;
}
void Table2::Insert(Key k, Value v){
    Slot<Key, Value> s;
    s.key = k;
    s.val = v;
    tbl[Hashfunc(k)].LInsert(s);
}

Value Table2::Delete(Key k){
    int hv = Hashfunc(k);
    Slot<Key, Value> s;    
    Person P;
    if(tbl[hv].LFirst(s)) {
        if(s.key == k) {
            tbl[hv].LRemove();    
            return s.val;
        }
        else{
            while(tbl[hv].LNext(s)) {
                if(s.key == k) {
                    tbl[hv].LRemove();    
                    return s.val;
                }
            }
        }
    }
    std::cout << " No value " << std::endl;
    return P;    
    
}
Value Table2::Search(Key k){
    int hv = Hashfunc(k);
    Slot<Key, Value> s;    
    Person P;
    if(tbl[hv].LFirst(s)) {
        if(s.key == k) {
            return s.val;
        }
        else{
            while(tbl[hv].LNext(s)) {
                if(s.key == k) 
                    return s.val;
            }
        }
    }
    std::cout << " No value " << std::endl;
    return P; 
}



#endif // _TABLE2_H_