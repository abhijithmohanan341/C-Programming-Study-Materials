// Write a C program to check whether a given number is prime or not
// using a function having arguments and return value.
// Return 1 if prime, otherwise return 0.

#include<stdio.h>
#include<conio.h>

void main()
{
    int prime(int);

    int n,p;

    clrscr();

    printf("Enter Number :: ");
    scanf("%d",&n);

    p=prime(n);

    if(p==1)
    {
        printf("Number is Prime");
    }
    else
    {
        printf("Number is Not Prime");
    }

    getch();
}

int prime(int n)
{
    int count=0,i=1;

    while(i<=n)
    {
        if(n%i==0)
        {
            count=count+1;
        }

        i++;
    }

    if(c==2)
    {
        return(1);
    }
    else
    {
        return(0);
    }
}

/*
Output 1:

Enter Number :: 7
Number is Prime

Output 2:

Enter Number :: 8
Number is Not Prime
*/