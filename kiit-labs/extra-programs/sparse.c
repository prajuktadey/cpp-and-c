// sparse matrix
#include <stdio.h>
 
void main ()
{
    static int array[10][10]; //static memory allocation
    int i, j, m, n;
    int counter = 0;
 
    printf("Enter the order of the matix: \n");
    scanf("%d %d", &m, &n);
    printf("Enter the co-efficients of the matix: \n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            scanf("%d", &array[i][j]);
            if (array[i][j] == 0)
            {
                ++counter; //increment the counter if the array element is 0
            }
        }
    }
    if (counter > ((m * n) / 2)) //checking whether the number of 0's is more than the other elements
    {
        printf("The given matrix is sparse matrix. \n");
    }
    else
        printf("The given matrix is not a sparse matrix. \n");
    printf("There are %d number of zeroes.", counter);
}