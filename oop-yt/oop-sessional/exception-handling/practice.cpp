#include <iostream>
using namespace std;

int main()
{
    int age = 17;
    try
    {
        if (age >= 18)
        {
            cout << "Access granted to the concert.";
        }
        else
        {
            throw(age);
        }
    }
    catch (int num)
    {
        cout << "Access denied because age is: " << age << endl;
    }
}