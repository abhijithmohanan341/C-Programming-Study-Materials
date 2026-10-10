// Write a C program to print 1 to N and find their sum
// using for loop.

#include<stdio.h>
#include<conio.h>

void main()
{
    int i,n,sum=0;

    printf("Enter the value of N ::\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("%d ",i);
        sum=sum+i;
    }

    printf("\nSum :: %d",sum);

    getch();
}