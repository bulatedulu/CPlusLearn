#include <iostream>
using namespace std;

const double PI = 3.14;

class Circle
{
public: //公共作用域
    //类中的函数 称为成员函数、成员方法
    double getCircumference()
    {
        return 2 * PI * m_R;
    }
    //设置半径
    void setR(int r)
    {
        m_R = r;
    }
    //获取半径
    int getR()
    {
        return m_R;
    }
    //类中的变量成为成员变量、成员属性
    int m_R; //半径

};

void test()
{
    Circle c; //通过类创建对象，实例化对象
    //c.m_R = 10;
    c.setR(10);
    cout << "圆的半径为：" << c.getR() << endl;
    cout << "圆的周长为：" << c.getCircumference() << endl;
}

int main()
{
    test();
    system("pause");
    return 0;
}