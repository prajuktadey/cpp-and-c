#include <fstream>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("out.txt");

    char str[300] = "Time is a great Teacher but unfortunately it kills all its pupils.";

    fout << str;

    fout.close();

    return 0;
}