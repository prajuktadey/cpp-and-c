#include <iostream>
#include <string>
using namespace std;

class Human
{
    public: 
    string name = "Anonymous"; //initialising the property name

    /*we are not defining the method here
    we are just declaring it*/
    void introduce();
};

/* we can define a method of the class outside of that class
definition by using scope resolution operator*/
void Human::introduce()
{
    cout<< Human::name<<endl;
}

int main()
{
    Human shawn;
    //shawn.name = "Shawn";
    shawn.introduce();

    return 0;
}

/*you can only initialise the static members/properties of the class
outside the class using scope resolution operator*/
