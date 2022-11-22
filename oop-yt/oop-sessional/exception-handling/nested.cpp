#include <iostream>
using namespace std;

int main()
{
    try
    {
        try
        {
            throw(20);
        }
        catch (int num)
        {
            cout << "Handle it partially." << endl;
            throw;
        }
    }
    catch (int num)
    {
        cout << "Handle the remaining part." << endl;
    }
}