#include <iostream>
using namespace std;

class Human
{
    public:
    static int human_count; //this variable is shared by all objects of this class
    
    /*no matter how many objects we create of this class
   there will be only one copy of static data member*/

   /*you cannot initialise the static data member inside that class, you need to do it outside*/

   Human()
   {
    human_count++;
   }
   
   void humanTotal()
   {
     cout<<"There are "<<human_count<<" people are in this program."<<endl;
   }

};

int Human::human_count=0; //accessing the static member and initialise the static data member



int main()
{
    cout<<Human::human_count<<endl;

    Human prajukta;
    Human max;
    prajukta.humanTotal();
    cout<<Human::human_count<<endl;

    return 0;
}
