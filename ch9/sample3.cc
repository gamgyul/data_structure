#include "PriorityQueue.h"
int DataPriorityComp(char ch1, char ch2){
    return ch2 - ch1;
}
int main(){
    PQueue<char> pq;
    pq.RegisterComp(DataPriorityComp);
    pq.Enqueue('A');
    pq.Enqueue('B');
    pq.Enqueue('C');
    std::cout << "first Elem : " << pq.Dequeue() <<std::endl;

    pq.Enqueue('A');
    pq.Enqueue('B');
    pq.Enqueue('C');
    std::cout << "second Elem : " << pq.Dequeue() <<std::endl;

    while(!pq.IsEmpty())
        std::cout << pq.Dequeue() <<std::endl;
    
    return 0;

}