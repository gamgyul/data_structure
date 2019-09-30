#include <iostream>
#include <vector>
void MergeTwoArea(std::vector<int> &nums, int left, int mid, int right){
    int i,j,k;
    j= left;
    k = mid+1;
    std::vector<int> tmpvec = nums;

    for (i =left; i<=right; ++i){ //버퍼 안담고있으면안되넹;;...
        if(j>=mid+1)
            tmpvec[i] = nums[k];
        else if(k >= right+1)
            tmpvec[i] = nums[j];
        else if(nums[j] < nums[k]){
            tmpvec[i] = nums[j];
            j++;
        }
        else{
            tmpvec[i] = nums[k];
            k++;
        }
    }
    nums = tmpvec;
}
void MergeSort(std::vector<int> &nums, int left, int right){
    int  middle;
    if(left == right)
        return;
    middle = (left + right)/2;
    MergeSort(nums, left, middle);
    MergeSort(nums,middle+1, right);

    MergeTwoArea(nums, left, middle, right);

}
void PrintVec(std::vector<int> &nums){
    int i;
    for (i=0; i < nums.size() ; ++i)
        std::cout <<nums[i] << std::endl;
}
int main(){
    std::vector<int> iv{ 3, 2, 1, 6};
    PrintVec(iv);
    MergeSort(iv,0, iv.size()-1);
    PrintVec(iv);
    return 0;
}