namespace uiuc
{
class cube //keyword class followed by the name of the class
{
   public: //public protection region
      cube(); //custom default constructor
      cube(const cube & obj);

      double getVolume();
      double getSurfaceArea();
      void setLength (double length);

    private: //everything under this are private variables or private functions in a class
      double length_;

}; //class always ends with a semi-colon
}

//in this .h file we have not defined how getVolume() works

#include <iostream>
namespace uiuc
{
    cube::cube()
    {
        length_=1;
        std::cout<<"Default constructor invoked!"<<std::endl;
    }

    cube::cube(const cube & obj)
    {
        length_=obj.length_;
        std::cout<<"Copy constructor invoked"<<std::endl;
    }

double cube::getVolume() //define the implementation of the cubes getVolume function
{
   return length_ * length_ *length_; //returns the volume of the cube
}

double cube::getSurfaceArea()
{
   return length_ * length_ *6; 
}

void cube::setLength(double length) //setLength is going to update our internal variables length to be equal to the variable that got passed in
{
   length_ = length;
}
}

//this contains the implementation of the three functions that we defined in our .h file

using uiuc::cube;
void foo(cube cube)
{
    //nothing
}


#include <iostream>
int main()
{
    cube c; //default constructor
    foo(c); //foo takes in blue cube as an argument which is a copy constructor

    return 0;
}

