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
  {
     if(Age>30)
       std::cout<<Name<<" got promoted."<<std::endl;
     else
       std::cout<<Name<<" sorry, no promotion for you."<<std::endl;
  }

  virtual void Work() //polymorphism part, make it virtual 
  //this is known as virtual function
  //when virtual functions are invoked, it asks the program to check for implementation of Work function in its derived classes
  {
    std::cout<<Name<<" is checking email, task backlog, performing those tasks."<<std::endl;
  }//Employee has its own implementation of the work method
};

class Developer: public Employee 
{
   public:
      string FavProgrammingLanguage;
      Developer(string name, string company, int age, string favProgrammingLanguage)
         :Employee(name,company,age)
      {
        FavProgrammingLanguage= favProgrammingLanguage;
      }

      void FixBug()
      {
        std::cout<<Name<<" fixed bug using "<<FavProgrammingLanguage<<std::endl;
        
    }
      void Work() //polymorphism part
    {
       std::cout<<Name<<" is writing "<<FavProgrammingLanguage<<" code"<<std::endl;
    }
    //Developer has its own implementation of the work method
    
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

     void Work() //polymorphism part
    {
       std::cout<<Name<<" is teaching "<<Subject<<std::endl;
    }
    //Teacher has its own implementation of the work method

};

int main()
{
  
  Developer d= Developer("Jeremiah", "Netflix", 25, "Python");
  Teacher t= Teacher("Jack", "CoolSchool", 34, "CS");
  
  Employee *e1= &d;
  Employee *e2= &t;
  //a pointer of base class can hold reference to derived class object 

  e1->Work(); //-> is used when you want to access members using a pointer
  e2->Work();

}

/*The most common use of polymorphism in programming is 
when a parent class reference is 
used to refer to an object of a child class.*/
