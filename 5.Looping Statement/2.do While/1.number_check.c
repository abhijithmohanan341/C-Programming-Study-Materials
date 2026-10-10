// Write a C program using do-while and switch statement
// Choice 1: Check Positive, Negative or Zero
// Choice 2: Check Even or Odd

#include<stdio.h>
#include<conio.h>

void main()
{
    int n,choice;
    char con;

    printf("Enter the number :: ");
    scanf("%d",&n);

    do
    {
        printf("\nOur Choices\n");
        printf("1. Positive, Negative or Zero\n");
        printf("2. Even or Odd\n");

        printf("Enter Your Choice :: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                if(n>0)
                {
                    printf("Positive Number");
                }
                else if(n<0)
                {
                    printf("Negative Number");
                }
                else
                {
                    printf("Zero");
                }
                break;

            case 2:
                if(n%2==0)
                {
                    printf("Even Number");
                }
                else
                {
                    printf("Odd Number");
                }
                break;

            default:
                printf("Invalid Choice");
        }

        printf("\nDo you want to continue? (Y/N) :: ");
        scanf(" %c",&con);

    }while(con=='Y' || con=='y');

    getch();
}