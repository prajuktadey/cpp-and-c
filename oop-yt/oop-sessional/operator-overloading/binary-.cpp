#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imaginary;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imaginary = i;
    }

    Complex operator-(Complex obj)
    {
        Complex temp;
        temp.real = real - obj.real;
        temp.imaginary = imaginary - obj.imaginary;
        return temp;
    }

    void print()
    {
        cout << real << "+" << imaginary << "i" << endl;
    }
};

int main()
{
    Complex ob1(10, 20);
    Complex ob2(5, 5);
    Complex ob3 = ob1 - ob2;
    ob3.print();

    return 0;
}