#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *storage;
    int x;

    /*use malloc to set the buffer size to store five integers*/
    
    storage= (int *)malloc(sizeof(int)*5);
    if(storage==NULL)
    {
        fprintf(stderr, "Allocation failed\n");
        exit(1);
    }

    puts ("Memory allocated");
    /*the pointer is allocated, and the storage locations
    are initialized to zero*/
    for(x=0;x<5; x++)
    {   
        *(storage+x)= (x+1)*11;//filled with values 
         printf("%d\n", *(storage+x));
    }


    /*now increase the buffer size to two integer values*/
    storage= (int*)realloc (storage, sizeof(int)*7);

    if (storage==NULL)
    {
        fprintf(stderr, "Reallocation failed\n");
    }
    puts("Buffer re-sized");
    /*adds the final two values*/
    *(storage+5)=66;
    *(storage+6)=77;

    /*output the results*/
    for(x=0; x<7; x++)
    {
        printf("%d\n", *(storage+x));
    }

    free (storage);
    storage=NULL;
    puts("Memory freed");

   return 0;
}
