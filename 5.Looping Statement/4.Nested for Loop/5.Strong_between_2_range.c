// Write a C program to print Strong numbers between two ranges
// using nested for loops.

#include<stdio.h>
#include<conio.h>

void main()
{
    int n,i,temp,digit,fact,sum,l1,l2,j;
    clrscr();

    printf("Enter Two Limits ::\n");
    scanf("%d%d",&l1,&l2);

    for(j=l1;j<=l2;j++)
    {
        n=j;
        temp=n;
        sum=0;

        for(;n>0;n=n/10)
        {
            digit=n%10;
            fact=1;

            for(i=1;i<=digit;i++)
            {
                fact=fact*i;
            }

            sum=sum+fact;
        }

        if(temp==sum)
        {
            printf("%d ",j);
        }
    }

    getch();
}