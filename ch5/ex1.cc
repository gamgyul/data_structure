#include "clist.h"

EmpInfo* rotation(Ch5CList list, std::string name, int days);

int main(){
    Ch5CList List;
    EmpInfo *info;
    info = new EmpInfo;
    info->name = "test";
    info->number = 111111;

    List.LInsert(info);

    info = new EmpInfo;
    info->name = "test2";
    info->number = 222222;

    List.LInsert(info);

    info = new EmpInfo;
    info->name = "test3";
    info->number = 333333;

    List.LInsert(info);

    info = new EmpInfo;
    info->name = "test4";
    info->number = 444444;

    List.LInsert(info);
    std::cout << List.LCount() <<std::endl;
    info = rotation(List, "test", 4);
    info->print();
    return 0;


}

EmpInfo* rotation(Ch5CList list, std::string name, int days){
    EmpInfo *search_node;
    int i = 0, num_of_node;
    bool match;
    match = false;
    num_of_node = list.LCount();
    list.LFirst(search_node);
    if (search_node->name == name)
        match = true;
    while(i< num_of_node && match){
        list.LNext(search_node);
        if(search_node->name == name){
            match = true;
            break;
        }
        i++;
    }
    if(!match){
        std::cout << "no match!!";
        exit(1);
    }
    i = 0;
    while(i < days){
        list.LNext(search_node);
        i++;
    }
    return search_node;
}