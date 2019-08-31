#ifndef _NAME_CARD_H
#define _NAME_CARD_H

#define NAME_LEN 30
#define PHONE_LEN 30

#include <iostream>
#include <cstring>

class NameCard{
private:
    char name[NAME_LEN];
    char phone[NAME_LEN];

public: 
    NameCard();
    NameCard(char* a_name, char* a_phone);

    NameCard& operator =(const NameCard&);
    void ShowNameCardInfo();
    bool NameCompare(char* a_name);
    void ChangePhoneNum(char* a_phone);
};

#endif
