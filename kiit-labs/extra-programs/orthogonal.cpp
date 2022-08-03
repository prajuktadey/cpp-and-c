/* WAP to check whether a given matrix is orthogonal or not. */

#include<iostream>
using namespace std;
int main ()
{
    int m, n, p, i, j, k, sum = 0;
    int A[10][10], T[10][10], P[10][10];
    cout << "Enter number of rows and columns: ";
    cin >> m >> n;
    if (m != n)
    {
        cout << "Matrix is not a square matrix.";
        exit(0);
    }
    cout << "Enter elements of matrix: ";
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            cin >> A[i][j];
 
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            T[j][i] = A[i][j];
 
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            for ( k = 0 ; k < n ; k++ )
                sum = sum + A[i][k] * T[k][j];
            P[i][j] = sum;
            sum = 0;
        }			
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
                if (P[i][j] != 1 )
                    break;
            else
            {
                if (P[i][j] != 0 )
                    break;
            }
        }
        if (j != m)
            break;
    }
    if (i != m)
        cout << "Matrix is not orthogonal.\n ";
    else
        cout << "Matrix is orthogonal.\n ";
	for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)	
            cout << A[i][j] << " ";
        cout << "\n ";
    }    
    return 0;
}