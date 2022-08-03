/* WAP to swap the pair of elements starting from beginning. */
 
#include <iostream>
using namespace std;
#define MAX 100

int main()
{
    int arr[MAX],n,i;
    int temp;
     
    cout<<"Enter total number of elements: ";
    cin>>n;
     
    //value of n must be even
    if(n%2 !=0)
    {
        cout<<"Total number of elements should be EVEN.";
        return 1;
    }

    //read array elements
    cout<<"Enter array elements:\n";
    for(i=0;i < n;i++)
    {
        cout<<"Enter element "<< i+1<< ": ";
        cin>>arr[i];
    }
    //swap adjacent elements
    for(i=0;i < n;i+=2)
    {
        temp    = arr[i];
        arr[i]  = arr[i+1];
        arr[i+1]= temp;
    }
     
    cout<<"\nArray elements after swapping adjacent elements:\n";
    for(i=0;i < n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}
