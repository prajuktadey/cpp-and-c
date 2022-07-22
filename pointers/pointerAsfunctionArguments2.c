#include <stdio.h>

int  main()
{
    int age;
    int *aptr;

    //must always initialize a pointer
    aptr= &age;

    printf("Your age: ");
    scanf("%d", aptr);

    printf("You claim to be %d years old\n", *aptr);
    //OR
    printf("You claim to be %d years old", age);

    return 0;
}