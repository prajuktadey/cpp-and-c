#include <iostream>
using std::string;

class Employee
{
public: //always change it to public in order to access the class variables
  string Name;
  string Company;
  int Age;

  void IntroduceYourself() //class method
  {
    std::cout<<"Name: "<< Name <<std::endl;
    std::cout<<"Company: "<< Company <<std::endl;
    std::cout<<"Age: "<< Age <<std::endl;
  }

  Employee(string name, string company, int age)//constructor
  {
     Name= name;
     Company= company;
     Age= age;
  }
};

int main()
{
   Employee employee1= Employee("Conrad", "Netflix", 23); //invoking the constructor 
   //employee1 object is created 
   employee1.IntroduceYourself();


   Employee employee2= Employee("Isabelle", "Netflix", 21);
   employee2.IntroduceYourself();

}
