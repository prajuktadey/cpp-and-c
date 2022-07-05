#pragma once //this pragma once line instructs the compiler to only compile this code once

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