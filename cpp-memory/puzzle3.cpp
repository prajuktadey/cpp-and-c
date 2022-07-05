#include <iostream>
int main()
{
    int *p, *q;
    p=new int;
    q=p;
    *q=8;//dereference value of q is 8
    std::cout <<*p<<std::endl; //8

    q=new int; //q no longer points to 8
    *q=9; //derefrencer value of q is 9
    std::cout <<*p<<std::endl; //8
    std::cout <<*q<<std::endl; //9

    return 0;

}