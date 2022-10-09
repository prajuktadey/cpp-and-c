#include <iostream>
#include <string>
using namespace std;

class mobile
{
  private:
   string name;
   int RAM;
   string processor;
   int battery;

  public:
  mobile(string name_p="NULL", int RAM_p= 0, string processor_p= "NULL", int battery_p=0)
  {
    name= name_p;
    RAM= RAM_p;
    processor= processor_p;
    battery= battery_p;

  }

  mobile(mobile &ob)
  {
    name= ob.name;
    RAM= ob.RAM;
    processor= ob.processor;
    battery= ob.battery;
  }

  void getData();

};

void mobile::getData()
{
    cout<<endl<<"Name:"<<name;
    cout<<endl<<"RAM:"<<RAM;
    cout<<endl<<"Processor:"<<processor;
    cout<<endl<<"Battery:"<<battery;
}

int main()
{
    mobile apple;
    mobile apple2("Iphone14", 4, "SnapDragon", 4000);
    mobile apple3(apple2);

    apple.getData();
    apple2.getData();
    apple3.getData();


    return 0;
}