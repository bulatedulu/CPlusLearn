#include<iostream>
using namespace std;

class Person
{
    friend ostream & operator<<(ostream & cout,const Person &p);
    friend istream & operator>>(istream &cin,  Person &p);

public:
    Person(){};
    Person(int id, int age)
    {
        this->id = id;
        this->age = age;
        }

        //前置++
        Person & operator++() 
        {
            ++age;
            return *this;
        }

        //后置++
        const Person operator++(int)
        {
            Person temp(*this);
            ++(*this);
            return temp;
        }

    private:
        int id;
        int age;
};

ostream & operator<<(ostream &cout,const Person &p) {
    cout << "id:" << p.id << " age:" << p.age;
    return cout;
}

istream & operator>>(istream &cin, Person &p) {
    int id;
    cin >> p.id >> p.age;
    return cin;
}

void test()
{
    // Person p(1, 10);
    Person p;
    cin >> p;

    cout << p << endl;

    cout << p++ << endl;

    cout << ++++p << endl;
}

int main()
{
    test();
    system("pause");
    return 0;
}