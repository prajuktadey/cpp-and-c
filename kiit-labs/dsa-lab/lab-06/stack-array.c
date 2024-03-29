//stack array representation

#include<stdio.h>
#include<stdlib.h>

void push(int);
int pop();
void display();

int top=-1;
int stack[10];

int main()
{
	
	printf("Enter 1 for push\nEnter 2 for pop\nEnter 3 for display\nEnter 5 to exit\n");
	int choice,again=1;
	int n;
	while(again!=0)
    {
		printf("\nEnter your choice: ");
		scanf("%d", &choice);
		switch(choice)
        {
			case 1:
				printf("\nEnter a number to be pushed into the stack: ");
				scanf("%d", &n);
				push(n);
				break;
			case 2:
				printf("\n%d has been poped out from the stack",pop());
				break;
			case 3:
				display();
				break;
			case 4:
				printf("\nExiting.");
				again=0;
				break;
			default:
				printf("\nInvalid Choice!");
				
		}
	}
	return 0;
}

void push(int n)
{
	if(top>9)
    {
		printf("\nStack Overflow!");
	}
	else
    {
		top++;
		stack[top]=n;	
	}
}
int pop()
{
	if(top==-1)
    {
		printf("\nStack is empty!");
		exit(1);
	}
	else
    {
		top--;
		return stack[top+1];
	}	
}

void display()
{
	if(top==-1)
    {
		printf("\nStack is empty!");
		return;	
	}
	else
    {
		int i;
		printf("\nThe elements in the stack are:");
		for(i=top;i>=0;i--)
        {
			printf(" %d",stack[i]);
		}
	}
}

