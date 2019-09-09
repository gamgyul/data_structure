#include "deque.h"

int main(){
    Deque deq;
    deq.AddFirst(3);
    deq.AddFirst(2);
    deq.AddFirst(1);
    deq.AddLast(4);
    deq.AddLast(5);
    deq.AddLast(6);

    while(!deq.IsEmpty())
        std::cout << deq.RemoveFirst() << std::endl;
    deq.AddFirst(3);
    deq.AddFirst(2);
    deq.AddFirst(1);
    deq.AddLast(4);
    deq.AddLast(5);
    deq.AddLast(6);

    while(!deq.IsEmpty())
        std::cout << deq.RemoveLast() << std::endl;

    return 0;
}