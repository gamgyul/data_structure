// #include "list.h"
#include "dlist.h"
int main(){
    
    std::cout << "hi" <<std::endl;
    Ch3List List;
    int data;
    int sum;
    List.LInsert(1);
    List.LInsert(2);
    List.LInsert(3);
    List.LInsert(4);
    List.LInsert(5);
    List.LInsert(6);
    List.LInsert(7);
    List.LInsert(8);
    List.LInsert(9);


    std::cout<< " 현재 갯수 : " << List.LCount() <<"\n";
    if(List.LFirst(data)){
        std::cout << data <<std::endl;
        sum = data;
        while(List.LNext(data)){
            std::cout << data <<std::endl;
            sum += data;
        }        
    }
    std::cout << " 합계 : " << sum <<std::endl;
    if(List.LFirst(data)){
        if(data % 2 == 0 || data % 3 == 0)
            List.LDelete();
        while(List.LNext(data)){
            if(data % 2 == 0 || data % 3 == 0){
                List.LDelete();
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