// Write a C program to print prime numbers between two ranges
// using nested for loops.

#include<stdio.h>
#include<conio.h>

void main()
{
    int n,i,count,l1,l2,j;
    clrscr();

    printf("Enter Two Limits ::\n");
    scanf("%d%d",&l1,&l2);

    for(j=l1;j<=l2;j++)
    {
        n=j;
        count=0;

        for(i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                count++;
            }
        }

        if(count==2)
        {
            printf("%d ",j);
        }
    }

    getch();
}