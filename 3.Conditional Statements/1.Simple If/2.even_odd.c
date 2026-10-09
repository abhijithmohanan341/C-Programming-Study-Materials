// Check given number is even or odd

#include<stdio.h>
#include<conio.h>

void main()
{
    int n;
    clrscr();


    printf("Enter a Number ::\n");
    scanf("%d",&n);

    if(n%2==0)
    {
        printf("Even Number");
    }

    if(n%2!=0)
    {
        printf("Odd Number");
    }

    getch();
}