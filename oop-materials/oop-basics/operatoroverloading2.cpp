#include <iostream>
#include <string>

using namespace std;

class A
{
    private:
    int weight;
    public:
    A(int x=0)
    {
        weight=x;
    }

    void PrintValue()
    {
        cout<<weight;
    }

    void operator++()
    {
        ++weight;
    }
};

int main()
{
    A Jon(78);
    ++Jon;

    Jon.PrintValue();

    return 0;


}