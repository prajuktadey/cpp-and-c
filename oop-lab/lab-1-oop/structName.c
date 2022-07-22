//WAP to input name, roll number and marks in 5 subjects for a student, and display it. 
#include <stdio.h>
struct student //structure definition 
{
    char name[50];
    int roll;
    float marks[5];
} s;

int main() 
{
    printf("Enter information:\n");
    printf("Enter name: ");
    fgets(s.name, sizeof(s.name), stdin);

    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    for(int i=1; i<=5; i++)
    {
    printf("Enter marks in subject %d: ", i);
    scanf("%f", &s.marks[i]);
    }

    printf("Displaying Information:\n");
    printf("Name: ");
    printf("%s", s.name);
    printf("Roll number: %d\n", s.roll);
    for(int i=1; i<=5; i++)
    {
    printf("Marks in subject %d: %f\n", i, s.marks[i]);
    }
    return 0;
}
