#include "MyArray.h"

MyArray::MyArray()
{
    this->m_capacity = 100;
    this->m_size = 0;
    this->pAddress = new int[this->m_capacity];
    cout << "默认构造函数" << endl;
}

MyArray::MyArray(int capacity)
{
    this->m_capacity = capacity;
    this->m_size = 0;
    this->pAddress = new int[this->m_capacity];
    cout << "有参构造函数" << endl;
}

MyArray::MyArray(const MyArray & arr)
{
    this->m_capacity = arr.m_capacity;
    this->m_size = arr.m_size;
    this->pAddress = new int[this->m_capacity];
    for (int i = 0; i < m_size; i++)
    {
        this->pAddress[i] = arr.pAddress[i];
    }
    cout << "拷贝构造函数" << endl;
}

//尾插
void MyArray::pushBack(int val)
{
    this->pAddress[this->m_size] = val;
    this->m_size++;
}
//设置指定位置数据
void MyArray::setData(int index, int val)
{
    this->pAddress[index] = val;
}
//根据位置获取数据
int MyArray::getData(int index)
{
    return this->pAddress[index];
}
//获取数组大小
int MyArray::getSize()
{
    return this->m_size;
}
//获取数组容量
int MyArray::getCapacity()
{
    return this->m_capacity;
}

MyArray::~MyArray()
{
    if (this->pAddress != NULL)
    {
        delete[] this->pAddress;
        this->pAddress = NULL;
    }
    cout << "析构函数" << endl;    
}

