#include <iostream>
using namespace std;

class rectangle
{
    public:
    int length;
    int breadth;

    void show()
    {
        cout<<"Area of the rectangle: "<<length*breadth<<endl;
    }
};

class cuboid: public rectangle
{
    public:
    int height;
    
    void volume()
    {
        cout<<"Volume of the cuboid: "<<length*breadth*height;
    }
};

int main()
{
    cuboid c;
    c.length= 10;
    c.breadth= 20;
    c.height=30;

    c.show();
    c.volume();

    return 0;
}