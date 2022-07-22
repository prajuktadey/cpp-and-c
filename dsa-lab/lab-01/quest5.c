/*Given an array, WAP to print the next greater element (NGE) for every
element. The next greater element for an element x is the first greater element on the
right side of x in array. Elements for which no greater element exist, consider next
greater element as -1.*/

#include <stdio.h>
 
// Find the next greater element for every element in an array
void findNextGreaterElements(int input[], int n)
{
    // do for each element
    for (int i = 0; i < n; i++)
    {
        // keep track of the next greater element for element `input[i]`
        int next = -1;
 
        // process elements on the right of element `input[i]`
        for (int j = i + 1; j < n; j++)
        {
            // break the inner loop at the first larger element on the
            // right of element `input[i]`
            if (input[j] > input[i])
            {
                next = input[j];
                break;
            }
        }
 
        printf("%d ", next);
    }
}
 
int main(void)
{
    int input[]={};
    int n = sizeof(input) / sizeof(input[0]);
 
    findNextGreaterElements(input, n);
 
    return 0;
}