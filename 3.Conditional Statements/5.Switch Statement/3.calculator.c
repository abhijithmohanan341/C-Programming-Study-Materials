// Write a C program to perform arithmetic operations
// using switch statement.

#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b,ch,result;

    printf("Enter Two Numbers ::\n");
    scanf("%d%d",&a,&b);

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter Your Choice ::\n");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:
            result=a+b;
            break;

        case 2:
            result=a-b;
            break;

        case 3:
            result=a*b;
            break;

        case 4:
            result=a/b;
            break;

        default:
            printf("Invalid Choice");
            getch();
            return;
    }

    printf("Result :: %d",result);

    getch();
}