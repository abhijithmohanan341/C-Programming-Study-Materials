// Find Largest of Three Numbers using if else

#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b,c,larger;

    printf("Enter Three Numbers ::\n");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b)
    {
        larger=a;
    }
    else
    {
        larger=b;
    }

    if(c>larger)
    {
        larger=c;
    }

    printf("Largest Number :: %d",larger);

    getch();
}