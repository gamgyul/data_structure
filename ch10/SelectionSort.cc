#include <iostream>
#include <vector>

void SelectionSort(std::vector<int> &nums){
    int min_index, i, j;
    int tmp;
    for(i=0; i < nums.size(); i++){
        min_index = i;
        for(j=i; j<nums.size(); j++){
            if(nums[j] < nums[min_index]) // 값보다는 index를 기억해야함 위치를 바꿔야하므로
                min_index = j;
        }
        tmp = nums[i];
        nums[i] = nums[min_index];
        nums[min_index] = tmp;

    }
}
void PrintVec(std::vector<int> &nums){
    int i;
    for (i=0; i < nums.size() ; ++i)
        std::cout <<nums[i] << std::endl;
}
int main(){
    std::vector<int> iv{ 3, 2, 6};
    PrintVec(iv);
    SelectionSort(iv);
    PrintVec(iv);
    return 0;
}