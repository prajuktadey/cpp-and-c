#include <stdio.h>
#include <stdlib.h>

int main()
{
    void *storage;//void pointer storage 

    storage= malloc(16);//16 bytes of storage are allocates in this line
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