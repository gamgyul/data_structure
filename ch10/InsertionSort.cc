#include <iostream>
#include <vector>

void InsertionSort(std::vector<int> &nums){
    int  i, j;
    int tmp;
    int inserted_int;
    for(i=1; i < nums.size(); ++i){
        inserted_int = nums[i];
        for(j = i-1; j >=0 ; --j){
            if(nums[j] > inserted_int)
                nums[j+1] = nums[j];
            else
            {
                break;
            }
            
        }
        nums[j+1] = inserted_int;
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
    InsertionSort(iv);
    PrintVec(iv);
    return 0;
}