// Write a C program to find the sum of two numbers using pointers and function.

#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b;
    void sum(int*,int*);

    clrscr();

    printf("Enter Two Numbers :: ");
    scanf("%d%d",&a,&b);

    sum(&a,&b);

    getch();
}

void sum(int*p1,int*p2)
{
    int c;

    c=(*p1)+(*p2);

    printf("SUM :: %d",c);
}

/*
Output:

Enter Two Numbers :: 10 20
SUM :: 30
*/