// Print digits and find sum of digits using while loop

#include<stdio.h>
#include<conio.h>

void main()
{
    int n,digit,sum=0;
    clrscr();


    printf("Enter a Number ::\n");
    scanf("%d",&n);

    if(n<0)
        n=-n;

    if(n==0)
        printf("0 ");

    while(n>0)
    {
        digit=n%10;
        printf("%d ",digit);
        sum=sum+digit;
        n=n/10;
    }

    printf("\nSum of Digits :: %d",sum);

    getch();
}