//search for an element using linear search method

#include<stdio.h>
  
int main()
{
    int a[100],i,x,n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
     
    printf("Enter array elements: ");
    for(i=0;i<n;++i)
        scanf("%d",&a[i]);
     
    printf("\nEnter an element to search: ");
    scanf("%d",&x);
     
    for(i=0;i<n;++i)
        if(a[i]==x)
            break;
     
    if(i<n)
        printf("Element found at index %d.",i);
    else
        printf("Element not found.");
  
    return 0;
}