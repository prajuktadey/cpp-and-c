/*Write a program in C to swap all the elements in the 1st column with all the
corresponding elements in the last column, and 2nd column with the second last
column and 3rd with 3rd last etc. of a 2-D dynamic array. Display the matrix.*/

#include <stdio.h>
#include<stdlib.h>

void swap(int *A, int n, int m){
    int i=0;
    int j=m-1;
    int k;
    while(i<n/2){
        for(k=0;k<n;k++){
            int temp = *(A+k*n+i);
            *(A+k*n+i)=*(A+k*n+j);
            *(A+k*n+j)=temp;
        }
        i++;
        j--;
    }
    printf("\nThe new matrix: \n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ",*(A+i*n+j));
        }
        printf("\n");
    }
}
int main()
{
    int n,m,i,j;
    printf("Enter no. of rows: ");
    scanf("%d",&n);
    printf("Enter no. of columns: ");
    scanf("%d",&m);
    int *A=(int *)malloc(n*m*sizeof(int));
    printf("Enter elements of matrix: \n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",(A+i*n+j));
        }
    }
    printf("\nThe matrix: \n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ",*(A+i*n+j));
        }
        printf("\n");
    }
    swap(A,n,m);

    return 0;
}
