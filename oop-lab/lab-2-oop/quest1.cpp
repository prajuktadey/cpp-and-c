//add two matrix of 2*3 and display the sum
#include <iostream>
using namespace std;

int main()
{
    int r, c, a[10][10], b[10][10], sum[100][100], i, j;

    cout << "Enter number of rows: ";
    cin >> r;

    cout << "Enter number of columns: ";
    cin >> c;

    cout << endl << "Enter elements of 1st matrix: " << endl;

    // storing elements of first matrix
    for(i = 0; i < r; ++i)
       for(j = 0; j < c; ++j)
       {
           cout << "Enter element a" << i << j << " : ";
           cin >> a[i][j];
       }

    // storing elements of second matrix
    cout << endl << "Enter elements of 2nd matrix: " << endl;
    for(i = 0; i < r; ++i)
       for(j = 0; j < c; ++j)
       {
           cout << "Enter element b" << i << j << " : ";
           cin >> b[i][j];
       }

    // adding the two matrices
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
            sum[i][j] = a[i][j] + b[i][j];

    // displaying the sum of the two matrices
    cout << endl << "Sum of two matrix is: " << endl;
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
        {
            cout << sum[i][j] << "  ";
            if(j == c - 1)
                cout << endl;
        }

    return 0;
}