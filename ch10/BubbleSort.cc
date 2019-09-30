#include <iostream>
#include <vector>

void BubbleSort(std::vector<int> &nums){
    int i, j, tmp;
    for(i = 0;i <nums.size()-1; ++i){
        for (j=0 ; j< nums.size()-1-i; ++j){
            if(nums[j] > nums[j+1]){
                tmp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = tmp;
            }
        }
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
    BubbleSort(iv);
    PrintVec(iv);
    return 0;
}