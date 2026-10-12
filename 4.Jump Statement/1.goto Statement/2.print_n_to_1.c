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

L3:
    if(i>=1)
        goto L1;
    else
        goto L2;

L1:
    printf("%d ",i);
    i--;
    goto L3;

L3:
    getch();
}