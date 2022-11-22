#include <iostream>
#include <stdlib.h>
using namespace std;

class student
{
private:
    string name;
    int age;

public:
    student()
    {
        cout << "Constructor called." << endl;
    }

    student(string n, int a)
    {
        name = n;
        age = a;
    }

    void display()
    {
        cout << name << endl;
        cout << age << endl;
    }

    void *operator new(size_t size)
    {
        cout << "Overloading new operator with size: " << size << endl;
        void *p = ::new student();
        return p;
    }

    void operator delete(void *p)
    {
        cout << "Overloading delete operator." << endl;
        free(p);
    }
};

int main()
{
    student *p = new student("Prajukta", 20);
    p->display();
    delete p;

    return 0;
}