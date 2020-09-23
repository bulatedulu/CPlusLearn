#include<iostream>
using namespace std;

#include "String.h"

void test()
{
    String str1 = "aaaaa";
    cout << str1 << endl;

    String str2(str1);
    cout << str2 << endl;

    cin >> str2;
    cout << str2 << endl;

    cout << str2[2] << endl;
    str2[2] = 'q';
    cout << str2 << endl;

    str2 = str1;
    str2 = str1 = "bbbb";
    cout << "str2=" << str2 << " str1=" << str1 << endl;

    String str3 = str1 + str2;
    cout << str3 << endl;
    String str4 = "bbbbbbbb";

    if (str3 == str4)
    {
        cout << "str3和str4相等" << endl;
    } else
    {
        cout << "str3和str4不相等" << endl;
    }
    
    
}

int main(int argc, char const *argv[])
{
    test();
    system("pause");
    return 0;
}
