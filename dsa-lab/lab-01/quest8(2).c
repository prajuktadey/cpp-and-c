#include <stdio.h>

int main() 
{
  // creating a student structure template
  struct student 
  {
    char name[64];
    char address[64];
    int roll;
    int marks;
  };
  
  // creating a student structure array variable
  struct student studentarray[5];
  
 //loop variables
  int i;
  
  // taking user input
  for (i = 0; i < 5; i++) {
    printf("Enter detail of student %d\n", (i+1));

    printf("Enter name: ");
    scanf("%s", studentarray[i].name);
  
    printf("Enter address: ");
    scanf("%s", studentarray[i].address);
  
    printf("Enter roll number: ");
    scanf("%d", &studentarray[i].roll);
  
    printf("Enter marks: ");
    scanf("%d", &studentarray[i].marks);
  }
  
  // display
  for (i = 0; i < 5; i++) 
  {
    printf("\nStudent #%d Detail:\n", (i+1));
    printf("Name: %s\n", studentarray[i].name);
    printf("Address: %s\n", studentarray[i].address);
    printf("Roll: %d\n", studentarray[i].roll);
    printf("Marks: %d\n", studentarray[i].marks);
  }
  
  return 0;
}