#include <iostream>
using namespace std;

int main()
{
    try
    {
        throw(10);
    }

    catch (...)
    {
        cout << "Default execption." << endl;
    }

    return 0;
}