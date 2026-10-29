// Write a C program to find the largest of three numbers
// using a function having arguments and return value.

#include<stdio.h>
#include<conio.h>

void main()
{
    int largest(int,int,int);

    int a,b,c,l;

    clrscr();

    printf("Enter Three Numbers :: ");
    scanf("%d%d%d",&a,&b,&c);

    l=largest(a,b,c);

    printf("Largest Number :: %d",l);

    getch();
}

int largest(int a,int b,int c)
{
    if(a>b && a>c)
    {
        return a;
    }
    else if(b>c)
    {
        return b;
    }
    else
    {
        return c;
    }
}

/*
Output:

Enter Three Numbers :: 10 25 15
Largest Number :: 25
*/