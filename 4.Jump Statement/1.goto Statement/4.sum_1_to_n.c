// Find the sum of numbers from 1 to N using goto statement

#include<stdio.h>
#include<conio.h>

void main()
{
    int i,n,sum=0;

    printf("Enter the value of N ::\n");
    scanf("%d",&n);

    i=1;

L1:
    if(i<=n)
        goto L2;
    else
        goto L3;

L2:
    sum=sum+i;
    i++;
    goto L1;

L3:
    printf("Sum :: %d",sum);

    getch();
}