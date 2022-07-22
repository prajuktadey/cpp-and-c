#include <stdio.h>

void set(int *x, int *y) //each variable is represented by its address
{
    *x=100;
    *y=200;
}

int main()
{
    int a, b;
    int *x, *y;

    *x= &a;
    *y=&b;
    set(x,y); //these are addresses
    printf("A= %d and B= %d\n", a,b);
    //OR
    printf("A= %d and B= %d\n", *x,*y);

    return 0;
}