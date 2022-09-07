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
    Human prajukta; //object will be stored in the stack
    prajukta.name= "Prajukta";
    prajukta.introduce();

    return 0;
}