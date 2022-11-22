#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin;
    fin.open("out.txt");

    int count = 0;
    char word[30];

    while (!fin.eof())
    {
        fin >> word;
        count++;
    }

    cout << count;
    fin.close();
    return 0;
}