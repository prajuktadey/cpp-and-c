//WAP to search an element in an array of n numbers.

#include<stdio.h>
int main()
{
  int arr[100],n1,n,i,count=0;
  int pos=0;

  printf("Enter the size of array: \n");
  scanf("%d",&n1);

  printf("Enter the element of array: \n");
  for(i=0;i<n1;i++)
  {
    scanf("%d",&arr[i]);
  }

  printf("Enter the number to be searched: \n");
  scanf("%d",&n);
  for(i=0;i<n1;i++)
  {
   if(arr[i]==n)
    {
      int pos=i+1;
      count++;
      printf("The position of the element searched: %d\n", pos);
    }
  }

 printf("\n");

 if(count!=0)
 {
  printf("The number is in array and it appeared %d time(s).",count);
 }

 else
 {
  printf("The number is not in array.");
 }

return 0;
}
