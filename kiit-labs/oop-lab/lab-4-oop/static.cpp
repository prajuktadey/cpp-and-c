//wap to display the message"hello" followed by your name on screen. 
#include <iostream>
using namespace std;

class message
{
    private:
     string name;

    public:
    static int count;
    void getOutput()
    {
        cout<<"Enter name: ";
        cin>> name;
    }

    void display()
    {
       cout<<"Hello "<<name;
    }

    void counter()
    {
        count++;
    }
};

int main()
{
    message m;
    m.getOutput();
    m.display();
}