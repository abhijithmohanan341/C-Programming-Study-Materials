// Find Largest of Two Numbers using if else

#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b;
    clrscr();


    printf("Enter Two Numbers ::\n");
    scanf("%d%d",&a,&b);

    if(a>b)
    {
        printf("Largest Number :: %d",a);
    }
    else
    {
        printf("Largest Number :: %d",b);
    }

    getch();
}