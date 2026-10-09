// Check whether a number is Odd or Even using Conditional Operator

#include<stdio.h>
#include<conio.h>

void main()
{
    int n;
    char result[10];

    printf("Enter a Number ::\n");
    scanf("%d",&n);

    (n%2==0)?printf("Even Number"):printf("Odd Number");

    getch();
}