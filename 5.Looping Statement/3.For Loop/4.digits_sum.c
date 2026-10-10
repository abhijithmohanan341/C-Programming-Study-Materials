// Write a C program to print the digits of a number
// and find the sum of digits using for loop.

#include<stdio.h>
#include<conio.h>

void main()
{
    int n,digit,sum=0;

    printf("Enter a Number ::\n");
    scanf("%d",&n);

    for(;n>0;n=n/10)
    {
        digit=n%10;
        printf("%d ",digit);
        sum=sum+digit;
    }

    printf("\nSum of Digits :: %d",sum);

    getch();
}