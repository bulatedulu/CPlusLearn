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


}

int main(int argc, char const *argv[])
{
    test();
    system("pause");
    return 0;
}
