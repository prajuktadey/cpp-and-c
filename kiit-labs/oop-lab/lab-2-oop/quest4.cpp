//wap to compare the two strings using library functions
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string s1;
    string s2;
    int a,b;

    cout << "Enter the string 1: ";
    cin >> s1 ;

    cout << "Enter the string 2: ";
    cin >> s2 ;

    int cmp= s1.compare(s2);
    if(cmp==0)
    {
        cout<<"The strings are the same.";
    }
    else
    {
        cout<<"The strings are not the same.";
    }
    return 0;
}