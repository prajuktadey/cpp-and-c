#include <iostream>
using namespace std;

class HumanBeing
/*class is a blueprint for declaring and creating objects*/

/*An object is a class instance that allows programmers to 
use variables and methods from inside the class.*/

{
   public: //access specifier

   /*whatever we write here can be accessed inside the class
   and can be accessed outside the class*/

   void display()
   {
    cout<<"Hello, World!";
   }

};

int main()
{
    HumanBeing prajukta;

    //accessing the function and members
    prajukta.display();
    /*to use the members of the class, we need to use the
    dot operator*/

}