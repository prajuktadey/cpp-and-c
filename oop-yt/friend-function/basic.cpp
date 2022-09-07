#include <iostream>
#include <string>
using namespace std;

class Human
{
    private: //by default access specifier is gonna be private
    string name;
    int age;

    public:

    Human(string iname, int iage)
    {
       name= iname;
       age=iage;
    }

    void tellme()
    {
        cout<<name<<endl<<age<<endl;
    }

    friend void display(Human woman); //friend function takes objects as a paramter
    //can access all the properties of this class Human
    //prototype of the function
};

void display(Human woman)
{
    cout<<woman.name<<endl<<woman.age<<endl;
}

int main()
{
    Human max("Max", 24);
    display(max);
    
    return 0;
}

/*if we have to access the members of the class outside of the 
class then we use friend functions*/