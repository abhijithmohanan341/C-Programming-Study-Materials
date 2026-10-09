// Write a C program using switch statement.
// Choice 1: Check whether a number is Even or Odd.
// Choice 2: Check whether a number is Positive, Negative or Zero.

#include<stdio.h>
#include<conio.h>

void main()
{
    int ch,n;
    clrscr();


    printf("1. Check Even or Odd\n");
    printf("2. Check Positive, Negative or Zero\n");

    printf("Enter Your Choice ::\n");
    scanf("%d",&ch);

    printf("Enter a Number ::\n");
    scanf("%d",&n);

    switch(ch)
    {
        case 1:
            if(n%2==0)
            {
                printf("Even Number");
            }
            else
            {
                printf("Odd Number");
            }
            break;

        case 2:
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

        default:
            printf("Invalid Choice");
    }

    getch();
}