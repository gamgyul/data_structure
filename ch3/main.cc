#include <iostream>
#include "list.h"
int main(){

    std::cout << "hi" <<std::endl;
    Ch3List List;
    int data;
    List.LInsert(11);
    List.LInsert(11);
    List.LInsert(22);
    List.LInsert(22);
    List.LInsert(33);

    std::cout<< " 현재 갯수 : " << List.LCount() <<"\n";
    if(List.LFirst(data)){
        std::cout << data <<std::endl;

        while(List.LNext(data))
            std::cout << data <<std::endl;
    }

    if(List.LFirst(data)){
        if(data == 22)
            data = 44;
        while(List.LNext(data)){
            if(data == 22){
                data = 44;
            }
        }
    }
    std::cout<< " 현재 갯수 : " << List.LCount() <<"\n";
    if(List.LFirst(data)){
        std::cout << data <<std::endl;

        while(List.LNext(data))
            std::cout << data <<std::endl;
    }
    return 0;
}