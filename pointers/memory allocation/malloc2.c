#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *storage;
    //storage is allocated to character buffer

    storage= (char *)malloc(sizeof(char)*16);
    //16 character size chunks are allocated in the malloc function
    //sizeof(char)=1 which is is multiplied by 16 and gives 16 bytes
    //the malloc function is type-cast as a character pointer
    //this type casting ensures that both sides of the expression deal with character pointers


    if(storage==NULL)//the storage pointer is tested for null
    {
        fprintf(stderr,"Allocation failed\n");
        exit(1);
    }

    else
    {
       puts("Memory allocated.");
    }

    return 0;
}