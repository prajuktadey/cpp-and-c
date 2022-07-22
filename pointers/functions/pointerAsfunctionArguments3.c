#include <stdio.h>

void set(int *x, int *y) //each variable is represented by its address
{
    *x=100;
    *y=200;
}

int main()
{
    int a, b;
    set(&a, &b); //a and b's addresses are sent off to the set function

    printf("A= %d and B= %d\n", a,b);

    return 0;
}