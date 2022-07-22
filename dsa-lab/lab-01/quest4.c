/*Given an unsorted array of size n, WAP to find and display the number of
elements between two elements a and b (both inclusive). range [2&gt;= and &lt;=5]*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("\n");

    int a[n];

    printf("Enter the array elements: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int l,u;
    printf("Enter the lower: ");
    scanf("%d" ,&l);
    printf("\n");
    printf("Enter the upper limit: ");
    scanf("%d" ,&u);
    

    int count=0;
    
    printf("The elements inside the range are as follows: \n");
    for(int i=0;i<n;i++)
    {
        if(a[i]>=l && a[i]<=u)
        {
        count+=1;
        printf("%d ", a[i]);
        }
    }

    printf("\n");
    printf("Number of elements between the limits: %d\n",count);

    return 0;
}