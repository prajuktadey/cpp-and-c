#include <iostream>
#include <string>
using namespace std;

class Human
{
    public: 
    string name;

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
    shawn.name = "Shawn";
    shawn.introduce();

    return 0;
}