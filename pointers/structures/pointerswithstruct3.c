#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//if structures ar pointers, we use the dash greater than symbol are used 

int main()
{
    struct person
    {
        char name[32];
        int age
    } *first; //pointer structure first

    /*allocate the structure's memory*/
    first= (struct person*)malloc (sizeof(struct person)*1);
    //type cast to person structure pointer
    
    if(first==NULL)
    {
        fprintf(stderr, "Unable to allocate storage\n");
        exit(1);
    }

    //assign structure members
    strcpy(first->name, "George Washington");
    printf("How old was %s: ", first->name);

    /*first->age is still an integer variable*/
    scanf("%d", &first->age);//ampersand operator is still used
    /*structure member age is an integer value and its address
    must be passed to the scanf function*/


    //output results
    printf("%s was %d years old\n", first->name, first->age);

    return 0;


}