#include <iostream>
using namespace std;

#include "MyArray.h"

void test()
{
    MyArray *arr1 = new MyArray(10);
    delete arr1;

    MyArray arr2;
    for (int i = 0; i < 10; i++)
     {
         arr2.pushBack(i + 100);
     }

    MyArray arr3(arr2);

    arr3.setData(0, 1000);

    for (int i = 0; i < arr3.getSize(); i++)
     {
         cout << "位置为" << i+1 << "的元素为" << arr3.getData(i) << endl;
     }
}

int main()
{
    test();
    system("pause");
    return 0;
}