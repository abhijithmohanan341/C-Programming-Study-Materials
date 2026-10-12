// Write a C program to print the digits of a number
// and find the sum of digits using while loop.

#include<stdio.h>
#include<conio.h>

void main()
{
    int n,digit,sum=0;
    clrscr();

    printf("Enter a Number ::\n");
    scanf("%d",&n);

    while(n>0)
    {
        digit=n%10;
        printf("%d ",digit);
        sum=sum+digit;
        n=n/10;
    }

    printf("\nSum of Digits :: %d",sum);

    getch();
}