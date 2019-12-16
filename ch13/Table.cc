
#include "Table.h"
Table::Table(){
    int i;
    for (i=0; i< MAX_TBL;++i)
        tbl[i].status = EMPTY;
}
void Table::Insert(Key k, Value v){
    tbl[Hashfunc(k)].key = k;
    tbl[Hashfunc(k)].val = v;
    tbl[Hashfunc(k)].status = INUSE;
}

Value Table::Delete(Key k){
    int hv = Hashfunc(k);
    Person P;
    if(tbl[hv].status != INUSE) {
        std::cout << " No value " << std::endl;
        
        return P;
    }
    else {
        tbl[hv].status = DELETED;
        return tbl[hv].val;
    }
}
Value Table::Search(Key k){
    int hv = Hashfunc(k);
    Person P;
    if(tbl[hv].status != INUSE) {
        std::cout << " No value " << std::endl;
        
        return P;
    }
    else 
        return tbl[hv].val;
    
}
// class Table {
// private:
//     Slot tbl[MAX_TBL];
//     std::function<int(Key)> Hashfunc;
// public:
//     Table();
//     ~Table();

//     void SetFunc(std::function<int(Key)> func){Hashfunc = func;}
//     Value Delete();
//     Value Search();
// };

