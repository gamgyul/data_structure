#ifndef _PRIORITY_QUEUE
#define _PRIORITY_QUEUE

#include <iostream>
#include "UsefulHeap.h"

template <typename T>
class PQueue {
private:
    Ch9Heap<T> hp;
    typedef int (*PriorityComp) (T d1, T d2);

public:
    inline bool IsEmpty() {
        return hp.IsEmpty();
    }

    inline void RegisterComp(PriorityComp func){
        hp.RegisterComp(func);
    }
    inline void Enqueue(T data){
        hp.Insert(data);
    }
    inline T Dequeue(){
        return hp.Delete();
    }
};

#endif // _PRIORITY_QUEUE