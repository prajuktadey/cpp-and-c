/*WAP to enter id, name, age and basic salary of n number of employees. 
Calculate the gross salary of all the employees and display it along with 
all other details in a tabular form, using pointer to structure. 
[ Gross salary= Basic salary + DA + HRA, DA = 80% of Basic salary, HRA=10% of Basic salary ] */

#include<stdio.h>

struct Employee
{  
 char name[50];  
 int id;
 int age; 
 int basic; 
 float salary; 
};

int main()
{  
 struct Employee e;
 float da,hra;  

 printf("Enter the details of the Employee:\n ");
 printf("Enter the Name: ");
 scanf("%s", e.name);
 printf("\n");
 printf("Enter the Id: ");
 scanf("%d",&e.id);
 printf("\n");
 printf("Enter the age: ");
 scanf("%d",&e.age);
 printf("\n");
 printf("Enter the basic salary: ");
 scanf("%d",&e.basic);
 printf("\n");


 da=(0.8 * e.basic);  
 hra=(0.10 * e.basic);    
 e.salary=(e.basic +da + hra);    

 printf("\n");
 printf("The details of the employee are: \n");  
 printf("Name: %s\n",e.name);
 printf("Id: %d\n",e.id);
 printf("Age: %d\n",e.age);
 printf("Gross salary: %f\n",e.salary);
 
 return 0; 

}