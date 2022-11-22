#include <iostream>
using namespace std;

class Test
{
public:
    Test()
    {
        cout << "Constructor called." << endl;
    }

    ~Test()
    {
        cout << "Destructor called." << endl;
    }
};

int main()
{
    try
    {
        Test t1;
        throw(10);
    }
    catch (int num)
    {
        cout << "Caught an exception." << endl;
    }

    return 0;
}

// When an exception is thrown, all objects created inside the enclosing try block are destructed before the control is transferred to catch block//