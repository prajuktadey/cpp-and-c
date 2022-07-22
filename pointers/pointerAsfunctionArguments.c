#include <stdio.h>

int main()
{
    int age;
    printf("Your age: ");

    scanf("%d", &age);
    //the second argument is a memory location, the address of variable 'age'
    //within a function, the value is set directly

    printf("You claim to be %d years old\n", age);

    return 0;
}