#pragma once

#include <iostream>
using namespace std;

class Point
{
private:
    int m_X;
    int m_Y;
public:
    int getX();
    void setX(int x);
    int getY();
    void setY(int y);
};