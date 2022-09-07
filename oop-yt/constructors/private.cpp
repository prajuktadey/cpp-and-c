/*a constructor has the same name as that of the class 
and has no return type*/

/*the special methods are called when you create an object of a class*/

#include <iostream>
#include <string>
using namespace std;

class Human
{
    private:
    string name;
    int age;

    public:

    Human()
    //constructor:initialise the properties of the class
    //this is the default contructor and it is automatically called
    {
       name = "Anonymous";
       age=0;
       cout<<"Constructor is called when you create an object of class Human."<<endl;
    }

    /*you can define this contrsuctor inside the class or you
    can define using the scope resolution operator*/

    void display()
    {
        cout<<name<<endl<<age<<endl;
    }
    
};

int main()
{
    Human mike;
    mike.display();

    return 0;
}

/*you cannot call the constructor in your program manually*/

