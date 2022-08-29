//wap to implement strlen (), strcat (),strcpy () using the concept of Functions.
#include <stdio.h>
#include <string.h>

int main()
{
    char string[10];
    char string2[10];
    char string3[10];
     
    printf("Enter the string: ");
    scanf("%s", &string);

    int length= strlen(string);
    printf("The length of the string is: %d", length);
    printf("\n");

    printf("Enter another string: ");
    scanf("%s", &string2);

    strcat(string, string2);
    printf("The concatenated string: %s", string);
    printf("\n");

    printf("Enter another string: ");
    scanf("%s", &string3);

    char destination[10];
    strcpy(destination, string3);
    printf("The copied string: %s",destination);

    return 0;

}
