/*Let A be square matrix. WAP by using appropriate user defined functions
for the following:
a) Find the number of nonzero elements in A
b) Find the sum of the elements above the leading diagonal.
c) Display the elements below the minor diagonal.
d) Find the product of the diagonal elements.*/

#include <stdio.h>

int main()
{

	int matrix[5][5], r, c, x = 0, size = 5;

	// Get the square matrix
	for (r = 0; r < size; r++) {
		for (c = 0; c < size; c++) {

			matrix[r][c] = ++x;
		}
	}

	// Display the matrix
	printf("The matrix is\n");
	for (r= 0; r < size; r++) {
		for (c= 0; c < size; c++) {

			printf("%d\t", matrix[r][c]);
		}

		printf("\n");
	}

	// Print the main diagonal elements
	printf("\nMain diagonal elements are:\n");

	for (r = 0; r < size; r++) {
		for (c = 0;  c< size; c++) {

			// check for main diagonal elements
			if (r == c)
				printf("%d, ", matrix[r][c]);
		}
	}

	return 0;
}
