#include "list.h"

Ch3List::Ch3List(){
    num_of_data = 0;
    cur_position = -1;
}
Ch3List::~Ch3List(){

}
void Ch3List::LInsert(LData data){
    if (num_of_data >= MAX_ARRAY_SIZE)
        std::cout << "maximum element\n";
    data_array[num_of_data++] = data;
}
bool Ch3List::LFirst(LData &data){
    if (num_of_data == 0){
        std::cout<< "no elem\n";
        return false;
    }
    cur_position = 0;
    data = data_array[cur_position];
    return true;
}
bool Ch3List::LNext(LData &data){
    if (cur_position >= num_of_data-1)
        return false;
    data = data_array[++cur_position];
    return true;
}
LData Ch3List::LDelete(){
    int i;
    LData data = data_array[cur_position];
    for(i = cur_position; i < num_of_data-1; i++){
        data_array[i] = data_array[i+1];
    }
    cur_position--;
    num_of_data--;
    return data;
}
int Ch3List::LCount(){
    return num_of_data;
}

