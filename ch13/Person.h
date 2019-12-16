#ifndef _PERSON_H_
#define _PERSON_H_
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

enum SlotStatus {EMPTY, DELETED, INUSE};


struct Slot{
    Key key;
    Value val;
    SlotStatus status;
};

#endif // _PERSON_H_