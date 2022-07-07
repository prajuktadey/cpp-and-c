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
public:

  string Company;
  int Age;

protected:
  string Name;
//If we make the base class property protected, that will make the the properties accessible to the derived class.
//check line 72 and 74

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

class Developer: public Employee 
//the problem on line 103 is the inheritance is private by default and it order to fix the problem we have, we have to make it public
{
   public:
      string FavProgrammingLanguage;
      Developer(string name, string company, int age, string favProgrammingLanguage)
         :Employee(name,company,age)////constructor of base class is going to take care of all the properties except FavProgrammingLanguage
      {
        FavProgrammingLanguage= favProgrammingLanguage;
      }

      void FixBug()
      {
        std::cout<<Name<<" fixed bug using "<<FavProgrammingLanguage<<std::endl;
        
    }
    
};

class Teacher:public Employee
{
  public:
   string Subject;
   void PrepareLesson()
   {
      std::cout<<Name<<" is preparing "<<Subject<<" lesson"<<std::endl;
   }
   Teacher(string name, string company, int age, string subject)
     :Employee(name,company,age)
     {
        Subject=subject;
     }

};

int main()
{
  
  Developer d= Developer("Jeremiah", "Netflix", 25, "Python");
  Teacher t= Teacher("Jack", "CoolSchool", 34, "CS");
  t.PrepareLesson();
  t.AskForPromotion();
}
