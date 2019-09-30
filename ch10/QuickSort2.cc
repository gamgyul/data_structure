#include <iostream>
#include <vector>
void swap(std::vector<int> &nums, int a, int b){
    int tmp = nums[a];
    nums[a] = nums[b];
    nums[b] = tmp;

}
int Partition(std::vector<int> &nums, int left, int right){
    
    int pivot;
    int mid = (left+right)/2;
    if(nums[left] <= nums[right]){
        if(nums[mid] <= nums[left])
            pivot = nums[left];
        else if(nums[mid] > nums[right]){
            pivot = nums[right];
            swap(nums, left, right);
        }
        else
        {
            pivot = nums[mid];
            swap(nums, left, mid);
        }
    }
    else
    {
        if(nums[mid] <=nums[right]) {
            pivot = nums[right];
            swap(nums, left, right);
        }
        else if(nums[mid] > nums[left]) {
            pivot = nums[left];
        }
        else {
            pivot = nums[mid];
            swap(nums, left, right);
        }
    }
    int low, high;
    low = left +1;
    high = right;
    std::cout << "pivot : " << pivot << std::endl;
    while(low<= high){ // =안붙히니까 무조건 스왑해버리네 high 낮출수있게 =일때도 적용하게
        while(nums[low] <=pivot && low<=right){
            ++low;
        }
        while(nums[high] > pivot)
            --high;
        if(low < high)
            swap(nums, low, high);
    }
    swap(nums, left, high);
    return high;
}
void QuickSort(std::vector<int> &nums, int left, int right){
    int  pivot;
    if(left < right){
    pivot = Partition(nums,left,right);
    QuickSort(nums, left, pivot-1);
    QuickSort(nums, pivot+1, right);
    }

}
void PrintVec(std::vector<int> &nums){
    int i;
    for (i=0; i < nums.size() ; ++i)
        std::cout <<nums[i] << std::endl;
}
int main(){
//    std::vector<int> iv{ 3, 2, 1, 3, 6};
   std::vector<int> iv{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};

    PrintVec(iv);
    QuickSort(iv,0, iv.size()-1);
    std::cout << "after" << std::endl;
    PrintVec(iv);
    return 0;
}