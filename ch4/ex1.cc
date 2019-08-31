#include "list.h"

int main(){
    Ch4List List;
    int data;
    
    List.LInsert(3);
    List.LInsert(2);
    List.LInsert(7);
    List.LInsert(8);
    List.LInsert(5);

    if (List.LFirst(&data)){
        std::cout << data << std::endl;
        while(List.LNext(&data))
            std::cout << data << std::endl;

    }
    return 0;
}