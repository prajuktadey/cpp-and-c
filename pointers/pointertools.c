#include <stdio.h>

int main()
{
    char a;

    //initialize variables
    a='A';
    printf("Value of variable 'a': %c\n", a);

    printf("Address of variable 'a': %p\n", &a);
    //obtain the address of variable a in memory
    //%p outputs the address as a hexadecimal value

    printf("Size of varialble 'a': %lu\n", sizeof(a));
    //the sizeof operator is used to obtain the number of bytes the variable uses in memory
    //lu: long unsigned integer
    
    return 0;

}