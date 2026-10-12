// Print 1 to N using goto statement

#include<stdio.h>
#include<conio.h>

void main()
{
    int i,n;
    clrscr();


    printf("Enter the value of N ::\n");
    scanf("%d",&n);

    i=1;

L3:
    if(i<=n)
        goto L1;
    else
        goto L2;

L1:
    printf("%d ",i);
    i++;
    goto L3;

L2:
    getch();
}