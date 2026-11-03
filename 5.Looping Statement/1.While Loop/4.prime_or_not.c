// Check whether a number is prime or not using while loop

#include<stdio.h>
#include<conio.h>

void main()
{
    int n,i=1,count=0;
    clrscr();


    printf("Enter a Number ::\n");
    scanf("%d",&n);

    while(i<=n)
    {
        if(n%i==0)
        {
            printf("%d\n",i);
            count++;
            break;
        }

        i++;
    }

    if(count==2)
    {
        printf("Prime Number");
    }  
    else
    {
        printf("Not a Prime Number");
    }
    getch();
}