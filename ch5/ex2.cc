#include "dlist.h"

int main(){
    Ch5DList list;
    int val;
    list.LInsert(1);
    list.LInsert(2);
    list.LInsert(3);
    list.LInsert(4);
    list.LInsert(5);
    list.LInsert(6);

    if(list.LFirst(val)){
        std::cout << "value : " << val << std::endl;
        while(list.LNext(val))
            std::cout << "value : " << val << std::endl;
        while(list.LPrev(val))
            std::cout << "value : " << val << std::endl;

    }
    if(list.LFirst(val)){
        if(val%2==0)
            list.LRemove();
        while(list.LNext(val)){
            if(val%2==0)
                list.LRemove();
        }
    }
    std::cout<< "********************" << std::endl;
    if(list.LFirst(val)){
        std::cout << "value : " << val << std::endl;
        while(list.LNext(val))
            std::cout << "value : " << val << std::endl;
        while(list.LPrev(val))
            std::cout << "value : " << val << std::endl;

    }
    
    return 0;

}