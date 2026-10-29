// Write a C program to find the sum of two numbers using pointers.

#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b,c;
    int *p1,*p2;

    clrscr();

    printf("Enter Two Numbers :: ");
    scanf("%d%d",&a,&b);

    p1=&a;
    p2=&b;

    printf("Address-1 :: %p\n",p1);
    printf("Address-2 :: %p\n",p2);

    printf("Value-1 :: %d\n",*p1);
    printf("Value-2 :: %d\n",*p2);

    c=(*p1)+(*p2);

    printf("SUM :: %d",c);

    getch();
}

/*
Output:

Enter Two Numbers :: 10 20
Address-1 :: 0x...
Address-2 :: 0x...
Value-1 :: 10
Value-2 :: 20
SUM :: 30
*/