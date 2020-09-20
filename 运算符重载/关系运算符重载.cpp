
#include<iostream>
using namespace std;

class Person
{
    public:
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    bool operator==(const Person & p)
    {
        return this->name == p.name && this->age == p.age;
    }

    bool operator!=(const Person & p)
    {
        return !(this->name == p.name && this->age == p.age);
    }

    string name;
    int age;
};

void test()
{
    Person p1("Tom", 10);
    Person p2("Tom", 0);

    if (p1 != p2) 
    {
        cout << "不相等" << endl;
    } else
    {
        cout << "相等" << endl;
    }
    

}

int main(int argc, char const *argv[])
{
    test();
    system("pause");
    return 0;
}
