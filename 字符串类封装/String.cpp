#include "String.h"

String::String(const char * str)
{
    this->length = strlen(str);
    this->pString = new char[this->length + 1];
    strcpy(this->pString, str);
}

String::String(const String & str)
{
    this->length = str.length;
    this->pString = new char[this->length + 1];
    strcpy(this->pString, str.pString);
}

String::~String()
{
    if (this->pString != NULL)
    {
        delete [] this->pString;
        this->pString = NULL;
        length = 0;
    }
}

//重载 [] 运算符
char & String::operator[](int index)
{
    return this->pString[index];
}

//重载 = 运算符
String &  String::operator=(const char *str)
{
    if (this->pString != NULL)
    {
        delete[] this->pString;
        this->pString = NULL;
    }
    this->length = strlen(str);
    this->pString = new char[this->length + 1];
    strcpy(this->pString, str);
    return *this;
}

//重载 = 运算符
String & String::operator=(const String &str)
{
    if (this->pString != NULL)
    {
        delete[] this->pString;
        this->pString = NULL;
    }
    this->length = str.length;
    this->pString = new char[this->length + 1];
    strcpy(this->pString, str.pString);
    return *this;
}

//重载 + 运算符
String String::operator+(const char *str)
{
    int length = this->length + strlen(str) + 1;
    char *temp = new char[length];
    memset(temp, 0, length);
    strcat(temp, this->pString);
    strcat(temp, str);
    String newStr(temp);
    delete[] temp;
    return newStr;
}
//重载 + 运算符
String String::operator+(const String &str)
{
    int length = this->length + str.length + 1;
    char *temp = new char[length];
    memset(temp, 0, length);
    strcat(temp, this->pString);
    strcat(temp, str.pString);
    String newStr(temp);
    delete[] temp;
    return newStr;
}

//重载 == 运算符
bool String::operator==(const char *str)
{
    return strcmp(this->pString, str) == 0 ? true : false;
}
//重载 == 运算符
bool String::operator==(const String &str)
{
    return strcmp(this->pString, str.pString) == 0 ? true : false;
}

//重载 << 运算符
ostream & operator<<(ostream &cout,const String &str) {
    cout <<  str.pString;
    return cout;
}

//重载 >> 运算符
istream & operator>>(istream &cin, String &str) {
    if (str.pString != NULL)
    {
        delete[] str.pString;
        str.pString = NULL;
    }
    char buf[1024];
    cin >> buf;
    str.length = strlen(buf);
    str.pString = new char[str.length + 1];
    strcpy(str.pString, buf);
    return cin;
}