// Write a C program to print perfect numbers between two ranges
// using nested for loops.

#include<stdio.h>
#include<conio.h>

void main()
{
    int n,i,sum,l1,l2,j;
    clrscr();

    printf("Enter Two Limits ::\n");
    scanf("%d%d",&l1,&l2);

    for(j=l1;j<=l2;j++)
    {
        n=j;
        sum=0;

        for(i=1;i<n;i++)
        {
            if(n%i==0)
            {
                sum=sum+i;
            }
        }

        if(n>0 && sum==n)
        {
            printf("%d ",j);
        }
    }

    getch();
}