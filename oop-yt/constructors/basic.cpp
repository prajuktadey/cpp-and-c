/*a constructor has the same name as that of the class 
and has no return type*/

/*the special methods are called when you create an object of a class*/

#include <iostream>
#include <string>
using namespace std;

class Human
{
    public:

    Human()//constructor:initialise the properties of the class
    {
       cout<<"Constructor is called when you create an object of class Human.";
    }

    /*you can define this contrsuctor inside the class or you
    can define using the scope resolution operator*/
    
};

int main()
{
    Human mike;

    return 0;
}

/*you cannot call the constructor in your program manually*/

