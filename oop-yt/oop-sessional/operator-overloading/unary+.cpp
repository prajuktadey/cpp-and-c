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

    Check operator++()
    {
        Check temp;
        ++num;
        temp.num = num;

        return temp;
    }

    void display()
    {
        cout << "The number is: " << num << endl;
    }
};

int main()
{
    Check obj;
    Check obj1;
    obj.display();
    obj1.display();
    ++obj;
    ++obj1;
    obj.display();
    obj1.display();

    return 0;
}
