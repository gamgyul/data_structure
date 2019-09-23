#include "UsefulHeap.h"
int DataPriorityComp(char ch1, char ch2){
    return ch2 - ch1;
}
int  main(){
    Ch9Heap<char> hp;
    hp.RegisterComp(DataPriorityComp);
    std::cout << hp.IsEmpty() <<std::endl;

    hp.Insert('A');
    hp.Insert('B');
    hp.Insert('C');
    std::cout << "first Elem : " << hp.Delete() <<std::endl;

    hp.Insert('A');
    hp.Insert('B');
    hp.Insert('C');
    std::cout << "second Elem : " << hp.Delete() <<std::endl;

    while(!hp.IsEmpty())
        std::cout << hp.Delete() <<std::endl;
    
    return 0;
}