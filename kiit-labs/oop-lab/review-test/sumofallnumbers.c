//C Program Sum of all numbers up to a given number

#include <stdio.h>  
#include <conio.h>  
int main()  
{  
    int num, i, sum = 0;  
    printf("Enter the limit: ");  
    scanf("%d", &num);  

    // executes until the condition remains true.  
    for (i = 0; i <= num; i++)  
    {  
        sum = sum + i; // at each iteration the value of i is added to the sum variable  
    }  

    // display the sum of natural number  
    printf("\nSum of the first %d number is: %d", num, sum);   
    return 0; 
}  