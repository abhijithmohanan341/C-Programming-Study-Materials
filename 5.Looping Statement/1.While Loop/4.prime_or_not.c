// Check whether a number is prime or not using while loop

#include<stdio.h>
#include<conio.h>

void main()
{
    int n,i=2,count=0;
    clrscr();


    printf("Enter a Number ::\n");
    scanf("%d",&n);

    while(i<n)
    {
        if(n%i==0)
        {
            count++;
            break;
        }

        i++;
    }

    if(n>1 && count==0)
    {
        printf("Prime Number");
    }  
    else
    {
        printf("Not a Prime Number");
    }
    getch();
}