// Write a C program to check whether a given number is palindrome or not
// using a function having arguments and return value.
// Return 1 if palindrome, otherwise return 0.

#include<stdio.h>
#include<conio.h>

void main()
{
    int palindrome(int);

    int n,p;

    clrscr();

    printf("Enter Number :: ");
    scanf("%d",&n);

    p=palindrome(n);

    if(p==1)
    {
        printf("Number is Palindrome");
    }
    else
    {
        printf("Number is Not Palindrome");
    }

    getch();
}

int palindrome(int n)
{
    int digit,rev=0,temp;

    temp=n;

    while(n>0)
    {
        digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }

    if(temp==rev)
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

Enter Number :: 121
Number is Palindrome

Output 2:

Enter Number :: 123
Number is Not Palindrome
*/