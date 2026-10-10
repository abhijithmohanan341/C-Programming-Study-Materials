// Write a C program to print N to 1 using for loop.

#include<stdio.h>
#include<conio.h>

void main()
{
    int i,n;

    printf("Enter the value of N ::\n");
    scanf("%d",&n);

    for(i=n;i>=1;i--)
    {
        printf("%d ",i);
    }

    getch();
}