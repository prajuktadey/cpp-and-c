/*Write a program in C to store employee’s data such as employee name, gender,
designation, department, basic pay. Calculate the gross pay of each employees as
follows:
Gross pay = basic pay + HR + DA
HR=25% of basic and DA=75% of basic.*/

#include<stdio.h>

struct Employee
{  
 char name[50];  
 char gender[50];
 char designation[50];
 char department[50];
 int basic; 
 float salary; 
};

int main()
{  
 struct Employee e;
 float da,hra;  

 printf("Enter the details of the Employee: \n");
 printf("Enter the Name: ");
 scanf("%s", e.name);
 printf("Enter the gender: ");
 scanf("%s",e.gender);
 printf("Enter the designation: ");
 scanf("%s",e.designation);
 printf("Enter the department: ");
 scanf("%s",e.department);

 printf("\n");
 printf("Enter the basic salary: ");
 scanf("%d",&e.basic);
 printf("\n");

 da=(0.75 * e.basic);  
 hra=(0.25 * e.basic);    
 e.salary=(e.basic +da + hra);    

 printf("\n");
 printf("The details of the employee are: \n");  
 printf("Name: %s\n",e.name);
 printf("Gender: %s\n",e.gender);
 printf("Designation: %s\n",e.designation);
 printf("Department: %s\n",e.department);

 printf("Gross salary: %f\n",e.salary);
 return 0; 

}