#include <stdio.h>
int main()
{
    int a[5]= {11, 22, 33, 44, 55};
    int x, *p;//p is an integer pointer 

    p=a;
    for(x=0; x<5; x++)
    {
        printf("%d\n", *(p+x)); //the value stored in pointer p is increased by the variable value of variable x
        //the value of pointer p is increased by x integer sized chunks
    }

    return 0;
}