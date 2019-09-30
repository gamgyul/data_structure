#include <iostream>
#include <vector>
#include "../ch9/UsefulHeap.h"
int DataPriorityComp(int i1, int i2){
    return i2 - i1;
}
void HeapSort(std::vector<int> &nums){
    int  i, j;
    Ch9Heap<int> hp;
    int tmp;
    int inserted_int;
    hp.RegisterComp(DataPriorityComp);
    for (i = 0; i< nums.size(); ++i){
        hp.Insert(nums[i]);
    }
    for(i =0; i<nums.size(); ++i)
    {
        nums[i] = hp.Delete();
    }
}
void PrintVec(std::vector<int> &nums){
    int i;
    for (i=0; i < nums.size() ; ++i)
        std::cout <<nums[i] << std::endl;
}
int main(){
    std::vector<int> iv{ 3, 2, 1, 6};
    PrintVec(iv);
    HeapSort(iv);
    PrintVec(iv);
    return 0;
}