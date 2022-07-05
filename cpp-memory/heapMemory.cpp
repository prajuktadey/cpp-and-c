#include <iostream>
int main()
{
    int *numPtr = new int;

    std::cout<<"*numPtr: "<<*numPtr <<std::endl;//the contents of the *
    std::cout<<"numPtr: "<<numPtr <<std::endl;
    std::cout<<"&numPtr: "<<&numPtr <<std::endl;

    *numPtr= 42;
    std::cout<<"*numPtr assigned 42. " <<std::endl;

    std::cout<<"*numPtr: "<<*numPtr <<std::endl;
    std::cout<<"numPtr: "<<numPtr <<std::endl;
    std::cout<<"&numPtr: "<<&numPtr <<std::endl;

    return 0;
 
}

//stack memory starts at high addresses and goes down
//heap memory starts at low addresses and goes up


/*numPtr: 1906186992 //what was in the memory before the memory was allocated as heap memory
numPtr: 0x2c0719e1780 //numPtr points to a heap memory address
&numPtr: 0xf39c1ff748 //&numPtr is a stack memory address

*numPtr assigned 42. 
*numPtr: 42
numPtr: 0x2c0719e1780
&numPtr: 0xf39c1ff748*/

//the address remains the same just the value changes