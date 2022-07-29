/*write a program in C to arrange the elements of a dynamic array such that all
even numbers are followed by all odd numbers*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, *p;
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    p=(int*)malloc(n*sizeof(int));
    printf("Enter the elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
    printf("\n");
    int t=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(p[j]%2!=0 && p[i]%2==0)
            {
                t=p[j];
                p[j]=p[i];
                p[i]=t;
            }
        }
    }
    printf("The rearranged array is : ");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",p[i]);
    }
    return 0;
}