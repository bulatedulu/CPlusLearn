#pragma once
#include<iostream>
using namespace std;

#include<Cstring>

class String
{
    //重载 << 运算符
    friend ostream & operator<<(ostream &cout,const String &str);
    //重载 >> 运算符
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
    //重载 [] 运算符
    char & operator[](int index);
    //重载 = 运算符
    String & operator=(const char *str);
    //重载 = 运算符
    String & operator=(const String &str);
    //重载 + 运算符
    String operator+(const char *str);
    //重载 + 运算符
    String operator+(const String &str);
    //重载 == 运算符
    bool operator==(const char *str);
    //重载 == 运算符
    bool operator==(const String &str);
};
