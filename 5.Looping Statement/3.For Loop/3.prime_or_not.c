// Write a C program to check whether a number is prime or not
// using for loop.

#include<stdio.h>
#include<conio.h>

void main()
{
    int i,n,count=0;

    printf("Enter a Number ::\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }

    if(count==2)
    {
        printf("Prime Number");
    }
    else
    {
        printf("Not a Prime Number");
    }

    getch();
}