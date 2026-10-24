// Write a C program to calculate the factorial of a number
// using a function having arguments and return value.

#include<stdio.h>
#include<conio.h>

void main()
{
    int factorial(int);

    int n, f;

    clrscr();

    printf("Enter a Number :: ");
    scanf("%d",&n);

    f=factorial(n);

    printf("Factorial of Number :: %d",f);

    getch();
}

int factorial(int n)
{
    int i=1, f=1;

    while(i<=n)
    {
        f=f*i;
        i++;
    }

    return f;
}

/*
Output:

Enter a Number :: 5
Factorial of Number :: 120
*/