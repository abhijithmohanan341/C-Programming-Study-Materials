// Print N to 1 using goto statement

#include<stdio.h>
#include<conio.h>

void main()
{
    int i,n;
    clrscr();


    printf("Enter the value of N ::\n");
    scanf("%d",&n);

    i=n;

L1:
    if(i>=1)
        goto L2;
    else
        goto L3;

L2:
    printf("%d ",i);
    i--;
    goto L1;

L3:
    getch();
}