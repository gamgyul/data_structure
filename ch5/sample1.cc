#include "list.h"

int main(){
    Ch5List list;
    int val;
    list.LInsert(1);
    list.LInsert(3);
    list.LInsert(2);
    list.LInsert(4);
    list.LInsert(6);
    list.LInsert(1);

    if(list.LFirst(val)){
        std::cout << "value : " << val << std::endl;
        while(list.LNext(val))
            std::cout << "value : " << val << std::endl;
        while(list.LPrev(val))
            std::cout << "value : " << val << std::endl;

    }
    return 0;

}