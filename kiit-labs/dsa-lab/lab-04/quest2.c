#include <stdio.h>
int main()
{
    int n, i;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    int arr[n];

    printf("0=vacant, 1=filled");
    printf("\nEnter the value of(0 or 1): \n");
    for (i = 0; i < n; i++)
    {
        printf("Element[%d]: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Original array: ");
    for(i=0; i<n; i++)
    {
        printf("%d", arr[i]);
    }

    printf("\n");
    for(i=0; i<n; i++)
    {
       if(arr[i]==0)
       {
        int pos0= i;
        printf("%d is vacant.", arr[i]);
        printf("\n");
       }
       
       if(arr[i]==1)
       {
        int pos1= i;
        printf("%d is occupied.", arr[i]);
        printf("\n");
       }
    }

    int num, position;
    printf("Enter a number to be filled in the vacant spot: ");
    scanf("%d", &num);
    printf("\n");
    printf("Enter the position you wanna insert into from the vacant spot: ");
    scanf("%d", &position);

    int j;
    for(j=0; j<n; j++)
    {
        if(position == (j))
        {
            arr[j-1]= num;

        }
    }

    printf("Displaying the new array: ");
    for(i=0; i<n; i++)
    {
        printf("%d", arr[i]);
    }
}




