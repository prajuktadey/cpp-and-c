//wap to find the minimum and maximum element of the array.


#include <stdio.h>
#include <conio.h>
 
 
int main()
{
    int a[1000],i,n,min,max;
   
    printf("Enter size of the array : ");
    scanf("%d",&n);
 
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
 
    min=max=a[0];
    for(i=1; i<n; i++)
    {
         if(min>a[i])
		  min=a[i];   
		   if(max<a[i])
		    max=a[i];       
    }
     printf("Min term of the array is : %d",min);
          printf("\nMax term of the array is : %d",max);
 
 
    return 0;
}