// Check whether a number is positive, negative or zero

#include<stdio.h>
#include<conio.h>

void main()
{
    int n;

    printf("Enter a Number ::\n");
    scanf("%d",&n);

    if(n>0)
    {
        printf("Positive Number");
    }
    else if(n<0)
    {
        printf("Negative Number");
    }
    else
    {
        printf("Zero");
    }

    getch();
}