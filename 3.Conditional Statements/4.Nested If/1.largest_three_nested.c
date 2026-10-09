// Find Largest of Three Numbers using Nested if

#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b,c;

    printf("Enter Three Numbers ::\n");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b)
    {
        if(a>c)
        {
            printf("Largest Number :: %d",a);
        }
        else
        {
            printf("Largest Number :: %d",c);
        }
    }
    else
    {
        if(b>c)
        {
            printf("Largest Number :: %d",b);
        }
        else
        {
            printf("Largest Number :: %d",c);
        }
    }

    getch();
}