//palindrome
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <ctype.h>

int main()
{
	char *str;
	int i;
	int size;
	int mid;

	//dynamic memory allocation
	str = malloc(sizeof(char) * 100);

	//enter the string
	printf("Enter a string : ");
	scanf("%[^\n]s",str);

	//calculate the size of the string
	size = strlen(str);

	//to check for palindrome
	for(i = 0; i < size/2 ;i++)
    {
	 	if(tolower(str[i]) != tolower(str[size - 1 -i])) //tolower function converts verything to lowercase
        {
	 		printf("Not a palindrome string.\n");
	 		break;
	 	}
	}

	//display details
	if(i==size/2)
    {
	 	printf("Entered string is palindrome.\n");
	}
}