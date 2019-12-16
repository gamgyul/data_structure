#include <iostream>

struct EmpInfo{
    int empNum;
    int age;
};
class TableHash{
private:
    EmpInfo *empInfoArr;
public:
    TableHash(int num){
        empInfoArr = new EmpInfo[num];
    }
    ~TableHash(){delete[] empInfoArr;}
    int GetHashValue(int empNum){
        return empNum % 100;
    }
    void Insert(EmpInfo info){
        empInfoArr[GetHashValue(info.empNum)] = info;
    }
    EmpInfo Search(int empNum){
        return empInfoArr[GetHashValue(empNum)];
    }
};

int main(){
    TableHash h(100);
    EmpInfo emp1= {2018078, 29};
    EmpInfo emp2= {2016043, 31};
    EmpInfo emp3= {2012024, 55};
    EmpInfo r1,r2,r3;
    h.Insert(emp1);
    h.Insert(emp2);
    h.Insert(emp3);
    r1 = h.Search(2012024);
    r2 = h.Search(2016043);
    r3 = h.Search(2018078);
    std::cout << "사번 :" << r1.empNum << ", 나이 :" << r1.age;
    std::cout << "사번 :" << r2.empNum << ", 나이 :" << r2.age;
    std::cout << "사번 :" << r3.empNum << ", 나이 :" << r3.age;
    return 0;
}