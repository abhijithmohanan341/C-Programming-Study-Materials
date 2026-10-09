// Find Largest of Two Numbers using Conditional Operator

#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b,larger;

    printf("Enter Two Numbers ::\n");
    scanf("%d%d",&a,&b);

    larger=(a>b)?a:b;

    printf("Largest Number :: %d",larger);

    getch();
}