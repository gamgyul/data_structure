#include "listbase_queue.h"

int main(){
    LQueue queue;
    queue.Enqueue(1);
    queue.Enqueue(2);
    queue.Enqueue(3);
    queue.Enqueue(4);
    queue.Enqueue(5);

    while (!queue.IsEmpty()){
        std::cout << queue.Dequeue() << std::endl;
    }
}