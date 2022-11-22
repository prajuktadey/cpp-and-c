#include <iostream>
using namespace std;

class Point
{
private:
    int x;
    int y;

public:
    Point(int x1 = 0, int y1 = 0)
    {
        x = x1;
        y = y1;
    }

    friend Point operator+(Point obj, Point obj2)
    {
        Point temp;
        temp.x = obj.x + obj2.x;
        temp.y = obj.y + obj2.y;

        return temp;
    }

    void show()
    {
        cout << x << endl;
        cout << y << endl;
    }
};

int main()
{
    Point obj(10, 20);
    Point obj1(20, 20);
    Point obj2;
    obj2 = obj + obj1;

    obj2.show();
}