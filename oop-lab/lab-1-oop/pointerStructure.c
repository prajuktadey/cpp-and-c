#include<stdio.h>
struct employee
{
    int id;
    char name[50];
    float age;
    float bs;
    float gs;
};
int main()
{
    int n;
    float da, hra;
    printf("Enter number of employee : ");
    scanf("%d",&n);
    struct employee s[n];
    struct employee *emp; //structure variable pointer
    emp = &s[0]; //assign structure pointer
    for(int i=0; i<n; i++)
    {
        //input
        printf("Enter id of employee : ");
        scanf("%d",&(emp+i)->id);//pointer to ith row
        printf("Enter name of employee : ");
        scanf(" %[^\n]",(emp+i)->name);
        printf("Enter age of employee : ");
        scanf("%f",&(emp+i)->age);
        printf("Enter gross salary of employee : ");
        scanf("%f",&(emp+i)->bs);

        //calculation 
        da=0.8*((emp+i)->bs);
        hra=0.1*((emp+i)->bs);
        (emp+i)->gs=(emp+i)->bs+da+hra;
    }

    printf("Displaying Employee Details: ");
    printf("\n");
    for(int i=0; i<n; i++)
    {
        printf("Employee %d:\t",i+1);
        printf("\n");
        printf("Id : %d\t",(emp+i)->id);
        printf("\n");
        printf("Name : %s\t",(emp+i)->name);
        printf("\n");
        printf("Age : %0.2f\t",(emp+i)->age);
        printf("\n");
        printf("Basic Salary : %0.2f\t",(emp+i)->bs);
        printf("\n");
        printf("Gross Salary : %0.2f\t",(emp+i)->gs);
        printf("\n");
    }
    return 0;
}