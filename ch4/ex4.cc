#include "point.h"
#include "dlist.h"
int compare(Point pos1, Point pos2){
    if(pos1.x < pos2.x)
        return 0;
    else if (pos1.x == pos2.x && pos1.y <= pos2.y)
        return 0;
    else
        return 1;
}

int main(){
    Point pos1(2,1);
    Point pos2(2,2);
    Point pos3(3,1);
    Point pos4(3,2);

    Ch4List list; 
    list.SetSortRule(compare);
    
    list.LInsert(pos1);
    list.LInsert(pos2);
    list.LInsert(pos3);
    list.LInsert(pos4);

    std::cout << "current num of data" << list.LCount() << std::endl;
    Point *pos;
    if(list.LFirst(pos)){
        pos->ShowPointPos();
        while(list.LNext(pos)){
        pos->ShowPointPos();
        }
    }
    Point comppos(2,0);
    if(list.LFirst(pos)){
        if(pos->PointComp(&comppos) == 1)
            *pos = list.LRemove();
        while(list.LNext(pos)){
            if(pos->PointComp(&comppos) == 1)
                *pos = list.LRemove();
        }
    }

    /* after remove */
    std::cout << "current num of data" << list.LCount() << std::endl;
    
    if(list.LFirst(pos)){
        pos->ShowPointPos();
        while(list.LNext(pos)){
        pos->ShowPointPos();
        }
    }
    return 0;
}