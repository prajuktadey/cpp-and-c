//insertion sort
 
#include <stdio.h>
 
int main()
{
    int arr[100], limit;
    int i,j,temp;
     
    printf("Enter total number of elements: ");
    scanf("%d",&limit);
     
    printf("Enter array elements: \n");
    for(i=0; i<limit; i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
         

    for(i=1; i<(limit); i++)
    {
        j=i;
        while(j>0 && arr[j]>arr[j-1])
        {
            temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
             
            j--;
        }
    }
 
    printf("Array elements in descending order:\n");
    for(i=0; i<limit; i++)
        printf("%d ",arr[i]);
         
    printf("\n");

    return 0;
}
