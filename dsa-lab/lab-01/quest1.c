/*Take n numbers as input in to an 1-d dynamic array A from user; write a C program
to compute and display the minimum, maximum, sum, and average of the elements in A.*/

#include<stdio.h>

int main()
{

	int a[50],i,n,max,min,sum=0;
    float average;

	printf("How many elements: ");
	scanf("%d",&n);
    printf("\n");

	printf("Enter the array elements: ");

	for(i=0;i<n;++i)
		scanf("%d",&a[i]);
	
	max=min=a[0];
	for(i=1;i<n;++i)
	{
		if(a[i]>max)
			max=a[i];
		if(a[i]<min)
			min=a[i];
	}

    for(i=0;i<n;++i)
    {
        sum= sum+a[i];
    }

    average= sum/n;
	
	printf("The largest element is %d",max);
	printf("\nThe smallest element is %d",min);
    printf("\nThe sum of the elements: %d", sum);
    printf("\nThe average: %f", average);
    
    return 0;
}
