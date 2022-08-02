/*WAP to sum the following series S=1+(1+2)+(1+2+3)+...+(1+2+3+...+n) */

#include <iostream>
using namespace std;

int main()
{
        int n,sum,sum1=0,i,j;

        cout<<"Enter value for n: ";
        cin>>n;

        for(i=1;i<=n;i++)
    {
                sum=0;
                for(j=1;j<=i;j++)
                {
                    sum=sum+j;
                }
                sum1=sum1+sum;
        }

        cout<<"The sum of series up to value "<<n<< " is "<<sum1;

        return 0;
}