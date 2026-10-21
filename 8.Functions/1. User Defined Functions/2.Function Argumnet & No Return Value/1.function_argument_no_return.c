// Write a C program to demonstrate a function
// having arguments and no return value.

#include<stdio.h>
#include<conio.h>

void main()
{
    void sum(int,int);    // Function Declaration

    int a,b;

    clrscr();

    printf("Enter Two Numbers ::\n");
    scanf("%d%d",&a,&b);

    sum(a,b);    // Function Calling

    getch();
}

void sum(int x,int y)    // Function Definition
{
    int c;

    c=x+y;

    printf("Sum :: %d\n",c);
}

/*
Output:

Enter Two Numbers ::
10
20
Sum :: 30
*/