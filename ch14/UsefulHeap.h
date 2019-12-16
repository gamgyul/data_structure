#ifndef _USEFUL_HEAP_H
#define _USEFUL_HEAP_H

#define HEAP_LEN 100
#include <iostream>
#include <vector>
typedef int Priority;

// template <typename T>
// struct HeapElem{
//     Priority pr;
//     T HData;
// };
template <typename T>
class  Ch9Heap{
public:
    typedef int (*PriorityComp) (T d1, T d2);

private:
    int num_of_data;
    T heapArr[HEAP_LEN];
    PriorityComp comp;
    inline int GetParentIDX(int idx){
        return idx/2;
    }
    inline int GetLeftChildIDX(int idx){
        return idx*2;
    }
    inline int GetRightChildIDX(int idx){
        return idx*2+1;
    }
    int GetHighPriChildIDX(int idx){
        if (GetLeftChildIDX(idx) > num_of_data)
            return 0;
        else if(GetLeftChildIDX(idx) == num_of_data)
            return GetLeftChildIDX(idx);
        else
        {
            if (comp(heapArr[GetLeftChildIDX(idx)], heapArr[GetRightChildIDX(idx)]) >= 0) //compare 실수 ...
                return GetLeftChildIDX(idx);
            else
                return GetRightChildIDX(idx);
        }
        
    }
public:
    Ch9Heap(){
        num_of_data = 0;
    }
    ~Ch9Heap(){}
    bool IsEmpty(){
        if (num_of_data == 0)
            return true;
        else
            return false;
    }
    void RegisterComp(PriorityComp func){
        comp = func;
    }
    T Delete()
    {
        T retdata = heapArr[1];
        T lastElem = heapArr[num_of_data];
        int parentIdx = 1;
        int childIdx;
        childIdx = GetHighPriChildIDX(parentIdx);
        while(childIdx){
            
            if(comp(lastElem, heapArr[childIdx])> 0)
                break;
            heapArr[parentIdx] = heapArr[childIdx];
            parentIdx = childIdx;
            childIdx = GetHighPriChildIDX(parentIdx);
        }
        heapArr[parentIdx] = lastElem;
        --num_of_data;
        return retdata;
    }
    
    void Insert(T data){
        int idx = num_of_data+1;
        int parentIdx;
        T newElem;
        newElem = data;
        while(idx != 1){
            parentIdx = GetParentIDX(idx);
            if (comp(heapArr[parentIdx], newElem) > 0)
                break;
            heapArr[idx] = heapArr[parentIdx];
            idx = parentIdx;
        }
        heapArr[idx] = newElem;
        ++num_of_data;
    }
};
#endif // _USEFUL_HEAP_H
