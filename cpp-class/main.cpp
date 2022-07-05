//#pragma once: this pragma once line instructs the compiler to only compile this code once

class cube //keyword class followed by the name of the class
{
   public: //public protection region
      double getVolume();
      double getSurfaceArea();
      void setLength (double length);

    private: //everything under this are private variables or private functions in a class
      double length_;

}; //class always ends with a semi-colon

//in this .h file we have not defined how getVolume() works


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

//this contains the implementation of the three functions that we defined in our .h file


#include <iostream>
int main()
{
    cube c;

    c.setLength(3.48); //set the length
    double volume = c.getVolume(); //define a variable volume that gets the value of ccls
    std::cout <<"Volume: " <<volume << std::endl;

    return 0;
}

