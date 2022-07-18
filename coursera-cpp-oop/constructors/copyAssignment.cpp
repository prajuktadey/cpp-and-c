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

#include <iostream>
namespace uiuc
{
    cube::cube()
    {
        std::cout<<"Default constructor invoked!"<<std::endl;
    }

    cube::cube(const cube & obj)
    {
        length_=obj.length_;
        std::cout<<"Copy constructor invoked!"<<std::endl;
    }

    cube & cube::operator=(const cube & obj) //function name is operator=
    {
        length_=obj.length_;
        std::cout<<"Assignment operator invoked!"<<std::endl;

        return *this; //return dereference value of this
    }
}

using uiuc::cube;

int main()
{
    cube c; //invoke a default constructor
    cube mycube; //invoke a default constructor

    mycube = c; //mycube is gonna take on the value of c

    return 0;
}