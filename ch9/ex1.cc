#include "PriorityQueue.h"
#include <string>
int DataPriorityComp(std::string s1, std::string s2){
    return s2.length() - s1.length();
}
int main(){
    PQueue<std::string> pq;
    pq.RegisterComp(DataPriorityComp);
    pq.Enqueue("hi");
    pq.Enqueue("hello");
    pq.Enqueue("I'm fine thank you");
    std::cout << "first Elem : " << pq.Dequeue() <<std::endl;

    pq.Enqueue("power overwhelming");
    pq.Enqueue("show me the money");
    pq.Enqueue("black sheep wall");
    std::cout << "second Elem : " << pq.Dequeue() <<std::endl;

    while(!pq.IsEmpty())
        std::cout << pq.Dequeue() <<std::endl;
    
    return 0;

}