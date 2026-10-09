// Check Strong number using while loop

#include<stdio.h>
#include<conio.h>

void main()
{
    int n,temp,digit,sum=0,i,fact;
    clrscr();


    printf("Enter a Number ::\n");
    scanf("%d",&n);

    temp=n;

    while(n>0)
    {
        digit=n%10;

        fact=1;
        i=1;

        while(i<=digit)
        {
            fact=fact*i;
            i++;
        }

        sum=sum+fact;
        n=n/10;
    }

    if(temp==sum)
    {
        printf("Strong Number");
    }
    else
    {
        printf("Not a Strong Number");
    }

    getch();
}