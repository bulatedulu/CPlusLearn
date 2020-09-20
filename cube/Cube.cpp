#include <iostream>
using namespace std;

class Cube
{
private:
    /* data */
    int m_L;    //长
    int m_W;    //宽
    int m_H;    //高
public:
    //获取长
    int getL()
    {
        return m_L;
    }
    //设置长
    void setL(int l)
    {
        m_L = l;
    }
    //获取高
    int getH()
    {
        return m_H;
    }
    //设置高
    void setH(int h)
    {
        m_H = h;
    }
    //获取宽
    int getW()
    {
        return m_W;
    }
    //设置宽
    void setW(int w)
    {
        m_W = w;
    }
    //获取面积
    int calculateS()
    {
        return 2 * (m_L * m_W + m_W * m_H + m_H * m_L);
    }
    //获取体积
    int calculateV()
    {
        return m_L * m_W * m_H;
    }
    //比较
    bool equals(Cube &c)
    {
        return 
        (m_L == c.getL()) 
        && (m_H == c.getH()) 
        && (m_W == c.getW()) 
        ? true : false;
    }

};

bool compareCube(Cube &c1, Cube &c2)
{
    return 
    (c1.getL() == c2.getL()) 
    && (c1.getH() == c2.getH()) 
    && (c1.getW() == c2.getW()) 
    ? true : false;
}

void test()
{
    //实例化
    Cube c1,c2;
    //设置属性值
    c1.setL(10);
    c1.setH(10);
    c1.setW(10);
    c2.setL(10);
    c2.setH(10);
    c2.setW(10);
    //获取面积
    cout << "立方体的面积为：" << c1.calculateS() << endl;
    //获取体积
    cout << "立方体的体积为：" << c1.calculateV() << endl;

    if (compareCube(c1, c2))
    {
        cout << "c1和c2相等！" << endl;
    } else
    {
        cout << "c1和c2不相等！" << endl;
    }

    if (c1.equals(c2))
    {
        cout << "c1和c2相等！" << endl;
    } else
    {
        cout << "c1和c2不相等！" << endl;
    }
}

int main()
{
    test();
    system("pause");
    return 0;
}