#pragma once

#include <iostream>
using namespace std;
#include "Point.h"

class Circle
{
private:
    int m_R;    //半径
    Point m_Center;   //圆心
public:
    int getR();
    void setR(int r);
    Point getCenter();
    void setCenter(Point p);
    void isInCircle(Point p);
};