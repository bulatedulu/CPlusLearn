 #include "Circle.h"   
    
int Circle::getR()
{
    return m_R;
}
void Circle::setR(int r)
{
    m_R = r;
}
Point Circle::getCenter()
{
    return m_Center;
}
void Circle::setCenter(Point p)
{
    m_Center = p;
}

void Circle::isInCircle(Point p)
{
    int x = m_Center.getX() - p.getX();
    int y = m_Center.getY() - p.getY();
    int ret = (x*x + y*y) - m_R*m_R;
    if (ret > 0)
    {
        cout << "点在圆外！" << endl;
    } else if (ret == 0)
    {
        cout << "点在圆上！" << endl;
    } else
    {
        cout << "点在圆内！" << endl;
    }
}