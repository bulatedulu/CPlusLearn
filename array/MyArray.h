#pragma once
#include <iostream>
using namespace std;

class MyArray 
{
    public:
        MyArray();
        MyArray(int capacity);
        MyArray(const MyArray &arr);

        //尾插
        void pushBack(int val);
        //设置指定位置数据
        void setData(int index, int val);
        //根据位置获取数据
        int getData(int index);
        //获取数组大小
        int getSize();
        //获取数组容量
        int getCapacity();

        ~MyArray();

    private:
        int * pAddress;     //指向堆区的数据指针
        int m_capacity;     //数组容量
        int m_size;         //数组大小
};