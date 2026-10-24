// Write a C program to calculate the factorial of a number
// using a function having arguments and no return value.

#include<stdio.h>
#include<conio.h>

void main()
{
    void factorial(int);

    int n;

    clrscr();

    printf("Enter a Number :: ");
    scanf("%d",&n);

    factorial(n);

    getch();
}

void factorial(int n)
{
    int i=1, f=1;

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