//wap to display the message "hello" followed by your name on screen. 
#include <iostream>
using namespace std;

class message
{
    private:

     string name;

    public:

    static int count;
    void getOutput();
    void display();

    //default constructor
    message()
    {
        count++;
    }
};

void message::getOutput()
{
    cout<<"Enter name: ";
    cin>> name;
}

void message::display()
{
    cout<<"Hello "<<name;
}

//initialization of the counter
int message::count;

int main()
{
    cout<<"Initial count: "<<message::count<<endl;
    message m;
    cout<<"Final count: "<<message::count<<endl;
    m.getOutput();
    m.display();
}