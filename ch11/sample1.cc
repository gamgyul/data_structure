#include "ISearch.h"

int main(){
    Search sh;
    std::vector<int> iv = {2,3,4,5,6,7};
    int num = sh.ISearch(iv, 0, iv.size()-1, 4);
    std::cout << "search 4: " << num << std::endl;
    num = sh.ISearch(iv, 0 , iv.size()-1 , 10);
    std::cout << "search 10: " << num << std::endl;
    return 0;
}