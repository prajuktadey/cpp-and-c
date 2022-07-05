#include "cube.h" //referencer header file

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