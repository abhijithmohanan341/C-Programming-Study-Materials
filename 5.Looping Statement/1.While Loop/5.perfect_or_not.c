// Check whether a number is perfect or not using while loop

#include<stdio.h>
#include<conio.h>

void main()
{
    int n,i=1,sum=0;
    clrscr();


    printf("Enter a Number ::\n");
    scanf("%d",&n);

    while(i<n)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }

        i++;
    }

    if(n>0 && sum==n)
    {
        printf("Perfect Number");
    }
    else
    {
        printf("Not a Perfect Number");
    }
    getch();
}