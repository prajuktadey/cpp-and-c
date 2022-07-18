#include <iostream>
int main()
{
    int i=2, j=4, k=8;
    int *p=&i, *q=&j, *r=&k; //pointer p points to the address of i

    k=i; //k=2 but pointer r is gonna point to the address of k which holds the value 2 now
    std::cout<<i<<j<<k<<*p<<*q<<*r<<std::endl;
    //output:  2 4 2 2 4 2 

    p=q; //p=4 which means pointer p points to the address of j
    std::cout<<i<<j<<k<<*p<<*q<<*r<<std::endl;
    //output: 2 4 2 4 4 2 

    *q=*r; //dereference value of q which is j takes on the dereference value of r which is k
    std::cout<<i<<j<<k<<*p<<*q<<*r<<std::endl;
    //output: 2 2 2 2 2 2 

    return 0;
}
