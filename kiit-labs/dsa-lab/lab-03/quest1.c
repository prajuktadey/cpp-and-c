/*Write a recursive program in C to print percentages from 1% to 50% of a integer
number. User will ask to enter a number.*/

#include<stdio.h>
void recur(int n,int i)
{
    float per;
    per=n*(i/100.0);
    printf("%0.2f\n",per);
    if(i<=50)
    {
        recur(n,i+1);
    }
}
int main()
{
    int n,i=1;
    printf("Enter number: ");
    scanf("%d",&n);
    recur(n,i);
}