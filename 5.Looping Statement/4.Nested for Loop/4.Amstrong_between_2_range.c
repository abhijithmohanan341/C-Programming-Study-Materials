// Write a C program to print three-digit Armstrong numbers
// between two ranges using nested for loops.

#include<stdio.h>
#include<conio.h>

void main()
{
    int n,i,temp,digit,sum,l1,l2,j;
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
            sum=sum+(digit*digit*digit);
        }

        if(temp==sum)
        {
            printf("%d ",j);
        }
    }

    getch();
}