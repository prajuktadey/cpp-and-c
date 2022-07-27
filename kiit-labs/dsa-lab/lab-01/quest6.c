/*Let A be square matrix. WAP by using appropriate user defined functions
for the following:
a) Find the number of nonzero elements in A
b) Find the sum of the elements above the leading diagonal.
c) Display the elements below the minor diagonal.
d) Find the product of the diagonal elements.*/

#include <stdio.h>
int non_zero(int n,int a[n][n]);
int leading_diagonal(int n,int a[n][n]);
void minor_diagonal(int n,int a[n][n]);
void diagonal_product(int n,int a[n][n]);
int main()
{
    int n,i,j;
    printf("Enter no. of elements\n");
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter element of index %d,%d:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Matrix: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d  \t",a[i][j]);
        }
        printf("\n");
    }
    int k=non_zero(n,a);
    printf("Number of non-zero elements: %d\n",k);
    int l=leading_diagonal(n,a);
    printf("Sum of elements above leading diagonal are: %d\n",l);
    minor_diagonal(n,a);
    diagonal_product(n,a);
    return 0;
}
int non_zero(int n,int a[n][n])
{
    int i,j,z=0,c=0;
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]==0)
            c++;
            else z++;
        }
    }
    return z;
}
int leading_diagonal(int n,int a[n][n])
{
    int i,j,s=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i<=j)
            {
                s+=a[i][j];
            }
        }
    }
    return s;
}
void minor_diagonal(int n,int a[n][n])
{
    printf("Elements below minor diagonal are: \n");
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if((i+j)>=(n-1))
            printf("%d  ",a[i][j]);
            else printf("   ");
        }
        printf("\n");
    }
}
void diagonal_product(int n,int a[n][n])
{
    int i,j,m=1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if((i==j)||((i+j)==(n-1)))
            m*=a[i][j];
        }
    }
    printf("\nProduct of leading and minor diagonal elements are: %d\n",m);
}

