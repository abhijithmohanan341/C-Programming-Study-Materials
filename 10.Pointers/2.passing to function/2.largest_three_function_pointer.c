// Write a C program to find the largest of three numbers using pointers and function.

#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b,c;
    void largest(int*,int*,int*);

    clrscr();

    printf("Enter Three Numbers :: ");
    scanf("%d%d%d",&a,&b,&c);

    largest(&a,&b,&c);

    getch();
}

void largest(int*p1,int*p2,int*p3)
{
    if(*p1>*p2 && *p1>*p3)
    {
        printf("Largest :: %d",*p1);
    }
    else if(*p2>*p1 && *p2>*p3)
    {
        printf("Largest :: %d",*p2);
    }
    else
    {
        printf("Largest :: %d",*p3);
    }
}

/*
Output:

Enter Three Numbers :: 10 25 15
Largest :: 25
*/