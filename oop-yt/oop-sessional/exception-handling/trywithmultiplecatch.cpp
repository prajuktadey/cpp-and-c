#include <iostream>
using namespace std;

int main()
{
    try
    {
        throw 'a';
    }

    catch (char a)
    {
        cout << "Letter caught." << endl;
    }
    catch (int x)
    {
        cout << "Caught" << endl;
    }
    catch (...)
    {
        cout << "Default exception." << endl;
    }

    return 0;
}