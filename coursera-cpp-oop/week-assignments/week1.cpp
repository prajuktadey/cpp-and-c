#include <iostream>
class Pair //defining class Pair
{
    public:
       int a; //decalring two variables
       int b;

       int sum()//defining a function to calculate the sum
       {
        return this->a + this->b; //returns the sum of a and b
       }

};//end of class


int main() 
{
  Pair p;
  p.a = 100;
  p.b = 200;
  if (p.a + p.b == p.sum()) {
    std::cout << "Success!" << std::endl;
  } else {
    std::cout << "p.sum() returns " << p.sum() << " instead of " << (p.a + p.b) << std::endl;
  }
  return 0;
}