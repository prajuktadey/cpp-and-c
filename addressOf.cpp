#include <iostream>

int main()
{
    int num =7;

    std::cout<< "Value= "<< num<<std::endl;
    std::cout<< "Address= "<< &num<<std::endl; //stack memory address
    //address is written in hexadecimal
    
    return 0;
}