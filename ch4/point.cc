#include "point.h"
Point::Point(){
    x = 0;
    y = 0;
}
Point::Point(int xpos, int ypos){
    x = xpos;
    y = ypos;
}
Point& Point::operator=(const Point& pos){
    x = pos.x;
    y = pos.y;
    return *this;
}
void Point::SetPointPos(int xpos, int ypos){
    x = xpos;
    y = ypos;
}
void Point::ShowPointPos(){
    std::cout <<"[ " << x << " , " << y << " ]" << std::endl;
}

int Point::PointComp(Point *pos){
    if (x == pos->x && y == pos->y)
        return 0;
    else if(x == pos->x)
        return 1;
    else if(y == pos->y)
        return 2;
    else
        return -1;
}

