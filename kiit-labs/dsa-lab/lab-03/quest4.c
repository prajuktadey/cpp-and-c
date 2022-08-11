/*Write a program in C to find the largest number and counts the occurrence of the
largest number in a dynamic array of n integers using a single loop.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int *a=(int *)malloc(n*sizeof(int));
    printf("Enter the elements: ");
    int i;
    for(i=0; i<n; i++)
    scanf("%d",(a+i));
    int x=*(a+0);
    for(i=0;i<n;i++)
    printf("%d ",*(a+i));
    for(i=0; i<n; i++){
        if (x<*(a+i))
        x=*(a+i);
    }
    int rec=0;
    for(i=0; i<n; i++){
        if(x==*(a+i))
        rec++;
    }
    printf("\nLargest number = %d\noccurence = %d",x,rec);

    return 0;
}