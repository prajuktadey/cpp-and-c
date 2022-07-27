/*Given an array, WAP to print the next greater element (NGE) for every
element. The next greater element for an element x is the first greater element on the
right side of x in array. Elements for which no greater element exist, consider next
greater element as -1.*/

#include<stdio.h> 

//prints the next greater element 
void printNGE(int arr[], int n) //parameters: array[] with size n
{ 
    int next, i, j; 
    for (i=0; i<n; i++) 
    { 
        next = -1; //default of next is -1
        for (j = i+1; j<n; j++) 
        { 
            if (arr[i] < arr[j]) //if the next element in the array is greater, then store the number in next and display it
            { 
                next = arr[j]; 
                break;
            } 
        } 
        printf("%d  |  %d\n", arr[i], next); 
    } 
} 
  
int main() 
{ 
    int num;
    printf("Enter the size of array: ");
    scanf("%d",&num);
    printf("\n");

    int arr[num];

    printf("Enter the array elements: \n");
    for(int i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }

    int n = sizeof(arr)/sizeof(arr[0]); 
    printNGE(arr, n); 
    return 0; 
} 