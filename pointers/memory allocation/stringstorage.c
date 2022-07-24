#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*15 characters are required for input*/
    char *input;

    input= (char *)malloc (sizeof(char) *15+1);
    //malloc function allocates  15 characters+1 for the null character
    //always have room for the null character at the end of the string 

    if(input==NULL)
    {
        fprintf(stderr, "Allocation failed\n");
        exit(1);
    }
    else
    {
        puts("Memory allocated for strings");
    }

    return 0;
}