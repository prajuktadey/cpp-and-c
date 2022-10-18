#include<iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout << "Base Class 1 Constructor\n";
    }
    ~A()
    {
        cout << "Base Class 1 Destructor\n";
    }
};

class B
{
public:
    B()
    {
        cout << "Base Class 2 Constructor\n";
    }
    ~B()
    {
        cout << "Base Class 2 Destructor\n";
    }
};

class C : public A, public B
{
public:
    C()
    {
        cout << "Derived Class Constructor\n";
    }
    ~C()
    {
        cout << "Derived Class Destructor\n";
    }
};

int main()
{
    C c1;

    return 0;
}