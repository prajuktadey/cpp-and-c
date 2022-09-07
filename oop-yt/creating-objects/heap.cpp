#include <iostream>
#include <string.h>
using namespace std;

class Human
{
   public:
   string name;
   void introduce()
   {
     cout<<"Hi "<<name<<endl;
   }
};

int main()
{
    //create an object
    Human *prajukta = new Human(); //return the address of the memory
    //new operator= object will be allocates in the heap memory 
    //and dynamic memory allocation takes place 

    prajukta->name = "Prajukta";
    prajukta->introduce();

    return 0;
}