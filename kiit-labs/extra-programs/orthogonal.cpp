#include <iostream>
using namespace std;
main()
{

 int i,j,k,size,flag=1;
 cout<<"Enter size of square matrix: \n";
 cin>>size;
 int a[size][size],temp[size][size],identityCheck[size][size],sum=0;
 cout<<"Enter Elements in matrix: \n";
 for(i=0;i<size;i++)
 {
  for(j=0;j<size;j++)
  {
   cin>>a[i][j];
  }
 }

 //Transpose of given matrix
 for(i=0;i<size;i++)
 {
  for(j=0;j<size;j++)
  {
   temp[i][j]=a[j][i];
  }
 }

 //Multiplying given A with A^T
 for(i=0;i<size;i++)
 {
  for(j=0;j<size;j++)
  {
   for(k=0;k<size;k++)
   {
    sum+=(a[i][k]*temp[k][j]);
   }
   identityCheck[i][j]=sum;
   sum=0;
  }
 }

 //Checking whether A*A^T resulted in Identity Matrix or not
 
 for(i=0;i<size;i++)
 {
  for(j=0;j<size;j++)
  {
   if(i==j && identityCheck[i][j]!=1)
   flag=0;
   if(i!=j && identityCheck[i][j]!=0)
   flag=0;
  }
 }
 //Checking for Orthogonal Matrix or not
 if(flag==1)
 {
  cout<<"Given Matrix is an orthogonal matrix.\n";
 }
 else
 {
   cout<<"Given matrix is not an orthogonal matrix.\n";
 }
}