// Write a C program to find the largest of three numbers
// using a function having arguments and no return value.

#include<stdio.h>
#include<conio.h>

void main()
{
    void largest(int,int,int);

    int a,b,c;

    clrscr();

    printf("Enter Three Numbers :: ");
    scanf("%d%d%d",&a,&b,&c);

    largest(a,b,c);

    getch();
}

void largest(int a,int b,int c)
{
    if(a>b && a>c)
    {
        printf("Largest Number :: %d",a);
    }
    else if(b>a && b>c)
    {
        printf("Largest Number :: %d",b);
    }
    else
    {
        printf("Largest Number :: %d",c);
    }
}

/*
Output:

Enter Three Numbers :: 10 25 15
Largest Number :: 25
*/