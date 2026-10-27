// Write a C program to demonstrate a function
// having arguments and a return value.

#include<stdio.h>
#include<conio.h>

void main()
{
    int sum(int,int);    // Function Declaration

    int a,b,r;

    clrscr();

    printf("Enter Two Numbers ::\n");
    scanf("%d%d",&a,&b);

    r=sum(a,b);    // Function Calling

    printf("Sum :: %d\n",r);

    getch();
}

int sum(int x,int y)    // Function Definition
{
    int c;

    c=x+y;

    return c;
}

/*
Output:

Enter Two Numbers ::
10
20
Sum :: 30
*/