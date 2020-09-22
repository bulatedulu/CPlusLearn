#pragma once
#include<iostream>
using namespace std;

#include<Cstring>

class String
{
    friend ostream & operator<<(ostream &cout,const String &str);
    friend istream & operator>>(istream &cin, String &str);
private:
    //指向堆区的字符串指针
    char * pString;
    //字符串长度
    int length;
public:
    //有参构造
    String(const char * str);
    //拷贝构造
    String(const String & str);
    //析构函数
    ~String();
};
