#include <stdio.h>
int main()
{
    int choice;
    printf("1: Enter the seats you wanna book.");
    printf("\n");
    printf("Enter the choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
          int num;
          printf("Total number of seats: ");
          scanf("%d", &num);
          int arr[num];
          for(int i=1; i<=num; i++)
          {
            arr[i]=0;
            printf("%d ", arr[i]);
          }
          printf("\n");
          for(int i=1; i<=num; i++)
          {
            printf("%d ", (i));
          }

          int seats;
          printf("\n");
          printf("How many seats you want to occupy: ");
          scanf("%d", &seats);
          int array[seats];
          for(int j=1; j<=seats; j++)
          {
              printf("Enter the position of the seat you want to occupy: ");
              scanf("%d", &array[j]);
              for(int i=1; i<num; i++)
              {
              if(array[j]==i)
              {
                  arr[i]=1;
              }
              }
          }

        for(int i=1; i<=num; i++)
          {
            printf("%d ", arr[i]);
          }


          int press;
          printf("\n");
          printf("Do you wanna continue your booking?Press 1 if you want to and 0 if you want to break.");
          scanf("%d", &press);
          printf("\n");
          if(press==0)
          {
            break;
          }
          if(press==1)
          {
          printf("How many seats you want to occupy: ");
          scanf("%d", &seats);
          int array[seats];
          for(int j=1; j<=seats; j++)
          {
              printf("Enter the position of the seat you want to occupy: ");
              scanf("%d", &array[j]);
              printf("\n");
              for(int i=1; i<num; i++)
              {
              if(array[j]==i)
              {
                  if(arr[i]==1)
                  {
                    printf("Seat is occupied.");
                  }
                  else if(array[j]==i)
                  {
                     arr[i]=1;
                  }
                  
              }
              }
          }

        for(int i=1; i<=num; i++)
          {
            printf("%d ", arr[i]);
          }
          }
    }
}

