#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *storage;
    int size= 5;//to store 5 integer values

    storage=(int *)malloc(sizeof (int)*size); //*size refers to multiplied by number of integers(5)
    if(storage==NULL)
    {
        fprintf(stderr, "Allocation failed\n");
        exit(1);
    }
    else
    {
       puts("Memory allocated for 5 integers.");
    }

    return 0;
}
