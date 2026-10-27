// Write a C program to demonstrate a function
// having no arguments and no return value.

#include<stdio.h>
#include<conio.h>

void sum();    // Function Declaration

void main()
{
    clrscr();

    printf("Start\n");

    sum();     // Function Calling

    printf("Stop\n");

    getch();
}

void sum()     // Function Definition
{
    int a,b,c;

    printf("Enter Two Numbers ::\n");
    scanf("%d%d",&a,&b);

    c=a+b;

    printf("Sum :: %d\n",c);
}

/*
Output:

Start
Enter Two Numbers ::
10
20
Sum :: 30
Stop
*/