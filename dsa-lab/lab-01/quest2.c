//wap to reverse the contents of an array
#include<stdio.h>
 
void main() 
{
    int a[100],reverse[100],i,n;
 
    printf("Enter number of elements: \n");    
    scanf("%d",&n);
    
    printf("Enter the elements: \n");
    for (i=0;i<n;i++) 
    {
        scanf("%d",&a[i]);
    }

    printf("\n");
    printf("The original array: \n");
    for (i=0;i<n;i++) 
    {
       printf("%d ", a[i]);
    }
 
    for(i=0;i<n;i++)
    {
        reverse[i]=a[n-i-1];
    }
 
   printf("\nOn reversing the array elements we get: \n");
   for(i=0;i<n;i++) 
   {
      printf("%d ",reverse[i]);
   }
}