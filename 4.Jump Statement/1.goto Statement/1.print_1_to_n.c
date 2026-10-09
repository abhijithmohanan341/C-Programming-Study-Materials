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

L1:
    if(i<=n)
        goto L2;
    else
        goto L3;

L2:
    printf("%d ",i);
    i++;
    goto L1;

L3:
    getch();
}