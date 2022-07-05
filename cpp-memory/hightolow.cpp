#include <iostream>

void foo()
{
    int x=42;
    std::cout<< "x is foo(): "<<x<<std::endl;
    std::cout<< "&x is foo(): "<<&x<<std::endl;
}

int main()
{
    int num = 7;
    std::cout<< "num in main(): "<<num<<std::endl;
    std::cout<< "&num in main(): "<<&num<<std::endl;

    foo(); //it's allocation is below the allocation of num

    return 0;
}

//main is going to run first
//first 7 will be stored in stacked memory 
//while main is still running, foo() function is called which is also going to be stored in stack memory

//first we will have the address of num and then we will have the address of x

//we also expect the address of num to be greater than the address of x