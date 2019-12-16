#ifndef _PERSON2_H_
#define _PERSON2_H_
#include <iostream>
#include <string>
#include <functional>
class Person{
private:
    int id;
    std::string name;
    std::string addr;
public:
    Person(int a_id, std::string a_name, std::string a_addr):
        id(a_id), name(a_name), addr(a_addr){}
    Person(): Person(0,"","") {}
    ~Person(){}
    void ShowPerInfo(){
        std::cout << "주민등록번호: " << id <<std::endl;
        std::cout << "이름: " << name << std::endl;
        std::cout << "주소: " << addr << std::endl;
    }
    inline int GetID(){return id;}
    // void MakeData(int ssn, std::string a_name, std::string a_addr)
};


typedef int Key;
typedef Person Value;

template<typename T1,typename T2>
struct Slot{
    T1 key;
    T2 val;
};

#endif // _PERSON2_H_