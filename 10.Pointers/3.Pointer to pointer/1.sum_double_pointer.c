// Write a C program to find the sum of two numbers using double pointers.

#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b,c;
    int *p1,*p2;
    int **x,**y;

    clrscr();

    printf("Enter Two Numbers :: ");
    scanf("%d%d",&a,&b);

    p1=&a;
    p2=&b;

    x=&p1;
    y=&p2;

    printf("Address-1 :: %p\n",*x);
    printf("Address-2 :: %p\n",*y);

    printf("Value-1 :: %d\n",**x);
    printf("Value-2 :: %d\n",**y);

    c=(**x)+(**y);

    printf("SUM :: %d",c);

    getch();
}

/*
Output:

Enter Two Numbers :: 10 20
Address-1 :: address of a
Address-2 :: address of b
Value-1 :: 10
Value-2 :: 20
SUM :: 30
*/