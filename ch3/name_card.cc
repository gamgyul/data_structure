#include "name_card.h"
NameCard::NameCard(){

}
NameCard::NameCard(char* a_name, char* a_phone){
    strcpy(name, a_name);
    strcpy(phone,a_phone);
}
NameCard& NameCard::operator=(const NameCard& a){
    strcpy(name, a.name);
    strcpy(phone, a.phone);
    return *this;
}
void NameCard::ShowNameCardInfo(){
    std::cout << " 이름 : " << name << std::endl;
    std::cout << " 전화번호 : " << phone << std::endl;
}
bool NameCard::NameCompare(char* a_name){
    if (a_name == NULL)
        return false;
    if(strcmp(name,a_name) == 0)
        return true;
    else
        return false;
}

void NameCard::ChangePhoneNum(char* a_phone){
    strcpy(phone, a_phone);
}


