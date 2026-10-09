// Print reverse and check palindrome using while loop

#include<stdio.h>
#include<conio.h>

void main()
{
    int n,temp,digit,rev=0;

    printf("Enter a Number ::\n");
    scanf("%d",&n);

    if(n<0)
    {
        printf("Negative numbers are not considered palindrome");
    }
    else
    {
        temp=n;

        while(n>0)
        {
            digit=n%10;
            rev=rev*10+digit;
            n=n/10;
        }

        printf("Reverse :: %d",rev);

        if(temp==rev)
        {
            printf("\nPalindrome Number");
        }
        else
        {
            printf("\nNot a Palindrome Number");
        }
    }

    getch();
}