#include <stdio.h>

int main()
{
    int a[5]= {11, 22, 33, 44, 55};
    int x, *p;//p is an integer pointer 

    p=a;
    for(x=0; x<5; x++)
    {
        printf("%p\n", p);
        p++;//incremented by 4 bytes
        //incremnentig the pointer refernces to the next address in the array
    }

    return 0;
}