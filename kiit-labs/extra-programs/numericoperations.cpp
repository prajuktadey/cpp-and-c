/*WAP to perform the addition, subtraction, 
division and multiplication of two real numbers and display the result. */

#include <iostream>
using namespace std;

int main()
{
    /* Variable declation */
    float x, y;
    float sum, difference, product;
    float quotient;
     
    // Taking input from user and storing it 
    cout << "Enter first number: \n";
    cin >> x;
    cout << "Enter second number: \n";
    cin >> y;
     
    // Adding two numbers 
    sum = x + y;

    // Subtracting two numbers 
    difference = x - y;

    // Multiplying two numbers
    product = x * y;

    // Dividing two numbers by typecasting one operand to float
    quotient = (float)x / y;
     
    cout << "\nSum = " << sum;
    cout << "\nDifference  = " <<difference;
    cout << "\nMultiplication = " << product;
    cout << "\nDivision = " << quotient;
     
    return 0;
}