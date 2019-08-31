#include "name_card.h"
#include "list.h"

int main(){

    Ch3List List;
    NameCard a("sung","010-8978-3783");
    NameCard b("test","111111111");
    NameCard c("hello","222222222");

    NameCard tmp;
    List.LInsert(a);
    List.LInsert(b);
    List.LInsert(c);

    std::cout << "current number: " << List.LCount() << std::endl;
    tmp = b;
    tmp.ShowNameCardInfo();

    if(List.LFirst(tmp)){
        if (tmp.NameCompare("hello"))
            tmp.ShowNameCardInfo();
        while(List.LNext(tmp)){
            if(tmp.NameCompare("hello"))
                tmp.ShowNameCardInfo();
        }
    }
    if(List.LFirst(tmp)){
        if (tmp.NameCompare("hello"))
            tmp.ChangePhoneNum("12345678");
        while(List.LNext(tmp)){
            if(tmp.NameCompare("hello")){
                std::cout << "found " <<std::endl;
                tmp.ChangePhoneNum("12345678");
                tmp.ShowNameCardInfo();
            }
        }
    }
    if(List.LFirst(tmp)){
        if (tmp.NameCompare("test"))
            List.LDelete();
        while(List.LNext(tmp)){
            if(tmp.NameCompare("test"))
            List.LDelete();
        }
    }

    std::cout << " current remain num:  " << List.LCount() << std::endl;
    if(List.LFirst(tmp)){
        tmp.ShowNameCardInfo();
        while(List.LNext(tmp)){
        tmp.ShowNameCardInfo();
        }
    }
    return 0;
}