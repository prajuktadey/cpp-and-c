#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    ifstream fin;
    fin.open("out.txt");

    char ch;

    while (!fin.eof())
    {
        fin.get(ch);
        cout << ch;
    }

    fin.close();
    return 0;
}