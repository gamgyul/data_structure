#ifndef _POINT_H
#define _POINT_H
#include <iostream>
class Point {
private:
int x;
int y;
public:
Point();
Point(int xpos, int ypos);
Point& operator =(const Point&);
void SetPointPos(int xpos, int ypos);
void ShowPointPos();
int PointComp(Point *pos);
friend int compare (Point pos1, Point pos2);
};
#endif // _POINT_H