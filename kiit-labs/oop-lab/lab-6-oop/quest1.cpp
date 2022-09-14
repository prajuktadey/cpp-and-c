#include <iostream>
#include <conio.h>

using namespace std;

class shape
{
public:
    void area(); 
};

class circle : public shape
{
    float r; 
public:
    void area()
    {
        cout << "\nEnter radius : ";
        cin >> r;
        cout << "\nArea of circle : " << (3.14159 * r * r)<<endl;
    }
};

class rectangle : public shape
{
    float l, b; 
public:
    void area()
    {
        cout << "\nEnter length : ";
        cin >> l;
        cout << "\nEnter breadth : ";
        cin >> b;
        cout << "\nArea of rectangle : " << l * b<<endl;
    }
};

class triangle : public shape
{

    float h, b;
    float a;

public:
    void area()
    {
        cout << "\nEnter height : ";
        cin >> h;
        cout << "\nEnter breadth : ";
        cin >> b;
        a = 0.5 * h * b;
        cout << "\nArea of triangle : " << a<<endl;
    }
};

int main()
{
    circle c; 
    c.area();
    rectangle r; 
    r.area();
    triangle t; 
    t.area();
    return (0);
}