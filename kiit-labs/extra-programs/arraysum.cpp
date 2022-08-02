/*WAP to find out the sum of the numbers stored in an array of integers. */

#include<iostream>
using namespace std;

int main()
{
   int arr[10], i, sum=0;

   cout<<"Enter 10 array elements: ";
   for(i=0; i<10; i++)
      cin>>arr[i];

   for(i=0; i<10; i++)
      sum = sum+arr[i];

   cout<<"\nSum of all array elements: "<<sum;
   cout<<endl;

   return 0;
}