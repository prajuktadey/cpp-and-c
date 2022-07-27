//add two matrix of 2*3 and display the sum
#include <iostream>
using namespace std;

int main()
{
    int  a[2][3], b[2][3], sum[2][3], i, j;

    // storing elements of first matrix
    for(i = 0; i < 2; ++i)
       for(j = 0; j < 3; ++j)
       {
           cout << "Enter element a" << i << j << " : ";
           cin >> a[i][j];
       }

    // storing elements of second matrix
    cout << endl << "Enter elements of 2nd matrix: " << endl;
    for(i = 0; i < 2; ++i)
       for(j = 0; j < 3; ++j)
       {
           cout << "Enter element b" << i << j << " : ";
           cin >> b[i][j];
       }

    // adding the two matrices
    for(i = 0; i < 2; ++i)
        for(j = 0; j < 3; ++j)
            sum[i][j] = a[i][j] + b[i][j];

    // displaying the sum of the two matrices
    cout << endl << "Sum of two matrix is: " << endl;
    for(i = 0; i < 2; ++i)
        for(j = 0; j < 3; ++j)
        {
            cout << sum[i][j] << "  ";
            if(j == 2)
                cout << endl;
        }

    return 0;
}