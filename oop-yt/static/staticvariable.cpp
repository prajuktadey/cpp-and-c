#include <iostream>
using namespace std;
void display();

//if we declare a member to be static, it will be available during function call
int main()
{
    display();
    display();
    display();
    return 0;
}

void display()
{
    static int counter =0; //line will be executed when display is called
    //will be stored in the heap memory
    cout<<"Display function called "<<++counter<<" times."<<endl;
}