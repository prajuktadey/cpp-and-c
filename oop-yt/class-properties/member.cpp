#include <iostream>
#include <string>

using namespace std;

class HumanBeing
{
  public:
    string name;

    void introduce()
    {
       cout<<"Hi, I am "<<name<<endl;
    }

};

int main()
{
    HumanBeing harry;

    //assign name
    harry.name= "Harry";
    harry.introduce();
}