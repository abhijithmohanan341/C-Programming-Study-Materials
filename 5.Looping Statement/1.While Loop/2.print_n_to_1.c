// Print N to 1 using while loop

#include<stdio.h>
#include<conio.h>

void main()
{
    int i,n;
    clrscr();


    printf("Enter the value of N ::\n");
    scanf("%d",&n);

    i=n;

    while(i>=1)
    {
        printf("%d ",i);
        i--;
    }

    getch();
}