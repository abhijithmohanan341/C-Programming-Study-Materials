// Check Armstrong number using while loop

#include<stdio.h>
#include<conio.h>

void main()
{
    int n,temp,digit,sum=0;

    printf("Enter a Three Digit Number ::\n");
    scanf("%d",&n);

    temp=n;

    while(n>0)
    {
        digit=n%10;
        sum=sum+(digit*digit*digit);
        n=n/10;
    }

    if(temp == sum)
    {
        printf("Armstrong Number");
    }
    else
    {
        printf("Not an Armstrong Number");
    }

    getch();
}