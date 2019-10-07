#include"ISearch.h"

int Search::ISearch(std::vector<int> iv, int first, int last, int target){
    int mid;
    if (target <iv[first] || target> iv[last])
        return -1;
    mid = static_cast<double>(target-iv[first])/(iv[last]-iv[first])*(last-first) + first;
    if (iv[mid] == target)
        return mid;
    if (iv[mid] > target)
        return ISearch(iv, mid + 1, last, target);
    else
        return ISearch(iv, first, mid - 1, target);
;}

    