#include "SimpleHeap.h"
int  main(){
    Ch9Heap<char> hp;
    std::cout << hp.IsEmpty() <<std::endl;

    hp.Insert('A',1);
    hp.Insert('B',2);
    hp.Insert('C',3);
    std::cout << "first Elem : " << hp.Delete() <<std::endl;

    hp.Insert('A',1);
    hp.Insert('B',2);
    hp.Insert('C',3);
    std::cout << "second Elem : " << hp.Delete() <<std::endl;

    while(!hp.IsEmpty())
        std::cout << hp.Delete() <<std::endl;
    
    return 0;
}