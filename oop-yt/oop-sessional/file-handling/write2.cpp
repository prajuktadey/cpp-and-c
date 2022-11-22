#include <fstream>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("text.txt");

    char str[400] = "Hello World!";
    fout << str;

    fout.close();
    return 0;
}