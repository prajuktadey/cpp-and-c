#include <iostream>
using namespace std;

int main()
{
    int x = -1;
    try
    {
        cout << "Inside try block." << endl;
        if (x < 0)
        {
            throw(x);
        }
    }
    catch (int num)
    {
        cout << "The number is not positive." << endl;
    }

    return 0;
}
