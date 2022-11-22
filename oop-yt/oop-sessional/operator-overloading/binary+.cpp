#include <iostream>
using namespace std;

class Complex
{
private:
    int real, imaginary;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imaginary = i;
    }

    Complex operator+(Complex ob)
    {
        Complex res;
        res.real = real + ob.real;
        res.imaginary = imaginary + ob.imaginary;
        return res;
    }

    void print()
    {
        cout << real << "+  " << imaginary << "i" << endl;
    }
};

int main()
{
    Complex c1(10, 5);
    Complex c2(15, 100);
    Complex c3 = c1 + c2;
    c3.print();

    return 0;
}