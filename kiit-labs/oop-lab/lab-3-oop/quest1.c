/*WAP to store records of book as structured data. And print the details of the book having
least price among all, where the book members are- title, author name, price & pages.*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
#define SIZE 20

struct bookdetail
{
    char name[20];
    char author[20];
    int pages;
    int price;

};

void output(struct bookdetail v[],int n);

void main()
{
    struct bookdetail b[SIZE];
    int n,i;
    printf("Enter the numbers of books: ");
    scanf("%d",&n);
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("Book %d Detail: \n",i+1);
        printf("\nEnter the Book Name:\n");
        scanf("%s",b[i].name);

        printf("Enter the Author of Book:\n");
        scanf("%s",b[i].author);

        printf("Enter the Pages of Book:\n");
        scanf("%d",&b[i].pages);

        printf("Enter the Price of Book:\n");
        scanf("%d",&b[i].price);

    }

    output(b,n);

}

void output(struct bookdetail v[],int n)
{
  int i,d,min=v[0].price;
  for(i=0;i<n;i++)
  {
    if(v[i].price<min)
    {
       min=v[i].price;
       d=i;
    }
  }

 printf("\n");
 printf("Details of book having minimum price: \n");
 printf("Title: %s\n Author: %s\n Price: %d\n Pages: %d\n",v[d].name,v[d].author,v[d].price,v[d].pages);
}
