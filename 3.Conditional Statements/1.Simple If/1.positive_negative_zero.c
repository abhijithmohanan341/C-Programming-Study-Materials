// Check given number is positive, negative or zero

#include<stdio.h>
#include<conio.h>

void main()
{
    int n;
    clrscr();


    printf("Enter a Number ::\n");
    scanf("%d",&n);

    if(n>0)
    {
        printf("Positive Number");
    }

    if(n<0)
    {
        printf("Negative Number");
    }

    if(n==0)
    {
        printf("Zero");
    }

    getch();
}