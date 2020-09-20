#include <iostream>
using namespace std;
#include "Point.h"
#include "Circle.h"

// class Point
// {
// private:
//     int m_X;
//     int m_Y;
// public:
//     int getX()
//     {
//         return m_X;
//     }
//     void setX(int x)
//     {
//         m_X = x;
//     }
//     int getY()
//     {
//         return m_Y;
//     }
//     void setY(int y)
//     {
//         m_Y = y;
//     }
// };

// class Circle
// {
// private:
//     int m_R;    //半径
//     Point m_Center;   //圆心
// public:
//     int getR()
//     {
//         return m_R;
//     }
//     void setR(int r)
//     {
//         m_R = r;
//     }
//     Point getCenter()
//     {
//         return m_Center;
//     }
//     void setCenter(Point p)
//     {
//         m_Center = p;
//     }

//     void isInCircle(Point p)
//     {
//         int x = m_Center.getX() - p.getX();
//         int y = m_Center.getY() - p.getY();
//         int ret = (x*x + y*y) - m_R*m_R;
//         if (ret > 0)
//         {
//             cout << "点在圆外！" << endl;
//         } else if (ret == 0)
//         {
//             cout << "点在圆上！" << endl;
//         } else
//         {
//             cout << "点在圆内！" << endl;
//         }
//     }
// };

void test()
{
    Point p1,p2;
    p1.setX(10);
    p1.setY(10);
    p2.setX(10);
    p2.setY(0);
    Circle c;
    c.setR(10);
    c.setCenter(p1);
    c.isInCircle(p2);
}

int main()
{
    test();
    system("pause");
    return 0;
}