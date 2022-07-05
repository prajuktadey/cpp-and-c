#include <iostream>
int main()
{
    int *x= new int;
    int &y= *x; //y is going to alias the dereference value of x
    //heap memory address is called y
    y=4;

    std::cout<<&x <<std::endl; //stack memory
    std::cout<<x <<std::endl; // heap memory
    std::cout<<*x <<std::endl; //4

    std::cout<< &y <<std::endl; //heap memory
    std::cout<< y <<std::endl; //4
    //std::cout<< *y <<std::endl;

    return 0;
}