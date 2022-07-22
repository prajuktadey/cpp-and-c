/*Write a C program that:
a. Uses Structure to store name, roll no., marks, and address of 5 students in C
programming subject;
b. Displays the stored information.*/

#include <stdio.h>
struct student
{
    char name[50];
    char address[50];
    int roll;
    float marks;

} s[5];

int main()
{
    int i,n;
    struct student s[5];

    for(i=0;i<5;i++)
    {
        printf("Enter information of student %d:\n",i+1);
        printf("Enter name: ");
        fgets(s[i].name, sizeof(s[i].name), stdin);

        printf("Enter the address: ");
        fgets(s[i].address, sizeof(s[i].address), stdin);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("Displaying Information:\n");
    for(i=0;i<n;i++)
    {
        printf("\n %d no. student info\n",i+1);
        printf("\t Name: %s\n ",s[i].name);
        printf("\t Address: %s\n ",s[i].address);
        printf("\t Roll number: %d\n",s[i].roll);
        printf("\t Marks: %.1f\n\n",s[i].marks);
    }

    return 0;
}