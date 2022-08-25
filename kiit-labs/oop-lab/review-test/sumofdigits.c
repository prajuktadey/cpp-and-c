// sum of digits

#include<stdio.h>

int main ()
{
    int num, sum = 0;
 
    printf("Enter a number: ");
    scanf("%d", &num);

    //loop to find sum of digits
    while(num!=0){
        sum += num % 10;
        num = num / 10;
    }
 
    //output
    printf("Sum: %d\n",sum);
 
    return 0;

}