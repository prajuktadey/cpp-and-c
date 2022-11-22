#include <iostream>
using namespace std;

class Check
{
private:
    int num;

public:
    Check(int i = 0)
    {
        num = i;
    }

    Check operator++(int) // for postfix
    {
        Check temp;
        num++;
        temp.num = num;

        return temp;
    }

    void print()
    {
        cout << num << endl;
    }
};

int main()
{
    Check obj, obj1;
    obj1 = obj++;
    obj.print();

    return 0;
}
