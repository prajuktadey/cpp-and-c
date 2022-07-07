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
};

int main()
{
   Employee employee1; //employee1 is a variable of type Employee
   //employee1 is an object of class Employee

   employee1.Name="Conrad Fisher";//set value for property Name
   employee1.Company="Netflix";
   employee1.Age=23;

   employee1.IntroduceYourself();


   Employee employee2;
   employee2.Name="Isabelle Cooper";//set value for property Name
   employee2.Company="Netflix";
   employee2.Age=22;

   employee2.IntroduceYourself();

}

//the class above doesn't represent data, it represents blueprint