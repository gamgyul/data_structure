#ifndef _SIMPLE_HEAP_H
#define _SIMPLE_HEAP_H

#define HEAP_LEN 100
#include <iostream>
#include <vector>
typedef int Priority;

template <typename T>
struct HeapElem{
    Priority pr;
    T HData;
};
template <typename T>
class  Ch9Heap{
private:
    int num_of_data;
    HeapElem<T> heapArr[HEAP_LEN];
    
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
            if (heapArr[GetLeftChildIDX(idx)].pr < heapArr[GetRightChildIDX(idx)].pr)
                return GetLeftChildIDX(idx);
            else
                return GetRightChildIDX(idx);
        }
        
    }
public:
    Ch9Heap(){
        int num_of_data = 0;
    }
    ~Ch9Heap(){}
    bool IsEmpty(){
        if (num_of_data == 0)
            return true;
        else
            return false;
    }
    T Delete()
    {
        T retdata = heapArr[1].HData;
        HeapElem<T> lastElem = heapArr[num_of_data];
        int parentIdx = 1;
        int childIdx;
        childIdx = GetHighPriChildIDX(parentIdx); 
        while(childIdx){
            
            if(lastElem.pr < heapArr[childIdx].pr)
                break;
            heapArr[parentIdx] = heapArr[childIdx];
            parentIdx = childIdx;
            childIdx = GetHighPriChildIDX(parentIdx); // childIdx가 바뀌고나서 다시 while 문에 들어가야함.  child가 없으면 while에서 빠져야하므로
        }
        heapArr[parentIdx] = lastElem;
        --num_of_data;
        return retdata;
    }
    
    void Insert(T data, Priority pr){
        int idx = num_of_data+1;
        int parentIdx;
        HeapElem<T> newElem;
        newElem.pr = pr;
        newElem.HData = data;
        while(idx != 1){
            parentIdx = GetParentIDX(idx);
            if (heapArr[parentIdx].pr < pr)
                break;
            heapArr[idx] = heapArr[parentIdx];
            idx = parentIdx;
        }
        heapArr[idx] = newElem;
        ++num_of_data;
    }
};
#endif // _SIMPLE_HEAP_H
