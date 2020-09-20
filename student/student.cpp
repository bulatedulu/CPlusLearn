#include <iostream>
using namespace std;
#include <string>

class Student 
{
public :
    // 设置学号
    void setId(int id)
    {
        m_Id = id;
    }
    // 获取学号
    int getId()
    {
        return m_Id;
    }
    //设置姓名
    void setName(string name)
    {
        m_Name = name;
    }
    //获取姓名
    string getName()
    {
        return m_Name;
    }
    //显示学生信息
    void showStudent()
    {
        cout << "学生学号：" << m_Id << " 学生姓名：" << m_Name << endl;
    }
    //学生姓名
    string m_Name;
    //学生学号
    int m_Id;
};

void test()
{
    Student s;
    s.setId(10);
    s.setName("张三");
    s.showStudent();
}

int main()
{
    test();
    system("pause");
    return 0;
}