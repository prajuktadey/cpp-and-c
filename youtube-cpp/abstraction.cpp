#include <iostream>
using std::string;

class AbstractEmployee //abstract class
{
   virtual void AskForPromotion()=0; //to make the method obligatory
   //we have to make the function a pure virtual function or an abstract function

};

class Employee: AbstractEmployee //Employee is inheriting from AbstractEmployee
//whichever class inherits from the abstract employee class, that class will have to provide implementation for the AskForPromotion() method
{
private:

  string Name;
  string Company;
  int Age;
  

public: 
  
  void setName(string name) 
  {
    Name= name;
  }
  string getName() 
  {
    return Name;  
  }

  void setCompany(string company) 
  {
    Company= company;
  }
  string getCompany() 
  {
    return Company; 
  }

  void setAge(int age) 
  {
    if(age>=18)
      Age= age;
  }
  int getAge() 
  {
    return Age; 
  }


  void IntroduceYourself() 
  {
    std::cout<<"Name: "<< Name <<std::endl;
    std::cout<<"Company: "<< Company <<std::endl;
    std::cout<<"Age: "<< Age <<std::endl;
  }

  Employee(string name, string company, int age)
  {
     Name= name;
     Company= company;
     Age= age;
  }

  void AskForPromotion() 
  //since it has inherited from the abstract class, the class Employee has to provide implementation which is written below
  {
     if(Age>30)
       std::cout<<Name<<" got promoted."<<std::endl;
     else
       std::cout<<Name<<" sorry, no promotion for you."<<std::endl;
  }
};

int main()
{
   Employee employee1= Employee("Conrad", "Netflix", 34); 
   Employee employee2= Employee("Isabelle", "Netflix", 21);
  
   employee1.AskForPromotion();//we are asking for promotion
   employee2.AskForPromotion();

}
