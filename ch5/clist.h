#ifndef _CLIST_H
#define _CLIST_H

#include <iostream>
#include <string>
#define MAX_CHAR 128
class EmpInfo{
public:
    int number;
    std::string name;
    //char name[MAX_CHAR];
    void print(){
        std::cout << "number : " << number << std::endl;
        std::cout << "name : " << name << std::endl;

    }
};

//typedef int LData;
typedef EmpInfo* LData;
class Node{
public:
    LData data;
    Node *next;
};

class Ch5CList {
private:
    int num_of_data;
    Node *tail;
    Node *before;
    Node *cur;

public:
    Ch5CList();
    ~Ch5CList();
    void LInsert(LData data);
    void LInsertFirst(LData data);
    bool LFirst(LData *datap);
    bool LFirst(LData &data);
    bool LNext(LData *datap);
    bool LNext(LData &data);
    LData LRemove();
    int LCount();


};
#endif // _CLIST_H