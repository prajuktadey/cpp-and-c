#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct person
    {
        char *name;//character pointer name
        int *age;//integer pointer age
    }my;

    char n[]= "Jennifer";

    //allocate storage for the age integer
    my.age=(int *)malloc(sizeof(int)*1);//storage for pointer age
    if(my.age==NULL)
    {
        fprintf(stderr, "Allocation error\n");
        exit(1);
    }

    /*assig value; the asterisk is requireed, but the 
    standard dot operator os used*/

    *my.age=26;//value is assigned to age member
    //the asterisk operator is used to reference the contents of the address

    /*because n is an array and my.name is a pointer,
    you can just copy the base address again, the dot 
    operator is used*/

    my.name=n; //the base address of character array n is assigned to the address stored in pointer member name
    //the asterisk operator is not required as both values represent an address

    printf("%s is %d years old\n", my.name, *my.age);

    return 0;
}