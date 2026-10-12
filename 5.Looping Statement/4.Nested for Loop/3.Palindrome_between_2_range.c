// Write a C program to print palindrome numbers between two ranges
// using nested for loops.

#include<stdio.h>
#include<conio.h>

void main()
{
    int n,i,temp,digit,rev,l1,l2,j;
    clrscr();

    printf("Enter Two Limits ::\n");
    scanf("%d%d",&l1,&l2);

    for(j=l1;j<=l2;j++)
    {
        n=j;
        temp=n;
        rev=0;

        for(;n>0;n=n/10)
        {
            digit=n%10;
            rev=rev*10+digit;
        }

        if(temp==rev)
        {
            printf("%d ",j);
        }
    }

    getch();
}