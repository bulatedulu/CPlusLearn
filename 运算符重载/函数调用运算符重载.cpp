
#include<iostream>
using namespace std;

class MyFunc
{

public:
    void operator()(string text)
    {
        cout << text << endl;
    }

    int operator()(int a, int b)
    {
        return a + b;
    }

};

void test()
{
    MyFunc myFunc;
    myFunc("hello word");
    //myFunc(2, 5);
    cout << MyFunc()(2, 5) << endl;
}

int main(int argc, char const *argv[])
{
    test();
    system("pause");
    return 0;
}
