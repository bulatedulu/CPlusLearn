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