#include <iostream>
using std::string;

class Employee
{
private:// data should always be private which is now encapsulated 

  string Name;
  string Company;
  int Age;
  //encapsulation is the way of making the the above variables private 

public: 
  
  void setName(string name) //setter
  {
    Name= name;//sets our property which is encapsulated to that value
  }
  string getName() //getter 
  {
    return Name; //return the value of our name property which is also encapsulated 
  }

  void setCompany(string company) //setter
  {
    Company= company;
  }
  string getCompany() //getter 
  {
    return Company; 
  }

  void setAge(int age) //setter
  {
    if(age>=18)//validation rule
      Age= age;
  }
  int getAge() //getter 
  {
    return Age; //return the value of our name property which is also encapsulated 
  }


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

   employee1.setAge(15);
   std::cout<<employee1.getName()<< " is "<<employee1.getAge()<<" years old."<<std::endl;

}
