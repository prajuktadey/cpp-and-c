#include <iostream>
int main() //starting point of our program
//everything after main is going to be ran sequentially
{
int i= 4; //define our first variable
i=i+2;//we take the value of i and add 2 to it

char c = 'a'; //we define a character

std :: cout <<i<<" "<<c<< std ::ends;
/*to the console we are concatenate the variable i which has value 6 and a space and the variable c which has the value a*/

//std:: cout stands for console out
// <<(double alligator) means we are gonna concatenate it
//std:: ends means new line

return 0; //retuns 0 if the program executes successfully
}