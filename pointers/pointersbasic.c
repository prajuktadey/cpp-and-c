#include <stdio.h>

int main()
{
    char a;
    char *ptr; //pointer ptr is declared

    //initialize variables
    a= 'A';
    printf("Value of variable 'a': %c\n", a);

    //assign ptr to a's address
    ptr= &a; //pointer is initialized 
    //pointer is initialized to the address of variable a which is assigned a value at line 9
    
    printf("Address of variable 'a': %p\n", ptr);
    //the pointer's address which is the address of variable a is output here
    
    printf("Value of pointer 'ptr': %c\n", *ptr);
    //this is used to output the value of variable a's address

    return 0;
}