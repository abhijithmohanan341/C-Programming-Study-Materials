// Write a C program to calculate the factorial of a number
// using a function having no arguments and no return value.

#include<stdio.h>
#include<conio.h>

void main()
{
    void factorial();

    clrscr();

    factorial();

    getch();
}

void factorial()
{
    int n, i=1, f=1;

    printf("Enter a Number :: ");
    scanf("%d",&n);

    while(i<=n)
    {
        f=f*i;
        i++;
    }

    printf("Factorial of Number :: %d",f);
}

/*
Output:

Enter a Number :: 5
Factorial of Number :: 120
*/