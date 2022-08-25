
/*WAP that takes two operands and one operator from the user and perform the 
operation and prints the result by using Switch statement.*/

#include <stdio.h>
#include <conio.h>
int main()
{
   int a, b, c;
   char ch;
   printf("Enter your operator(+, -, /, *, %)\n");
   scanf("%c", &ch);
   printf("Enter the values of a and b: \n");
   scanf("%d %d", &a, &b);
 
   switch(ch)
   {
      case '+': c = a + b;
        printf("Addition of two numbers is %d", c);
        break;
      case '-': c = a - b;
         printf("Substraction of two numbers is %d", c);
         break;
      case '*': c = a * b;
         printf("Multiplication of two numbers is %d", c);
         break;
      case '/': c = a / b;
         printf("Remainder of two numbers is %d", c);
         break;
      case '%': c = a % b;
         printf("Quotient of two numbers is %d", c);
         break;
      default: printf("Invalid operator");
         break;
   }
    return 0 ;
}