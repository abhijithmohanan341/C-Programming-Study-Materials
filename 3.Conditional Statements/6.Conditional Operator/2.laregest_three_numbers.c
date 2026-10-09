// Find Largest of Three Numbers using Conditional Operator

#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b,c,larger;

    printf("Enter Three Numbers ::\n");
    scanf("%d%d%d",&a,&b,&c);

    larger=(a>b)?a:b;
    larger=(larger>c)?larger:c;

    printf("Largest Number :: %d",larger);

    getch();
}