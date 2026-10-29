// Write a C program to find the largest of three numbers using pointers.

#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b,c,largest;
    int *p1,*p2,*p3;

    clrscr();

    printf("Enter Three Numbers :: ");
    scanf("%d%d%d",&a,&b,&c);

    p1=&a;
    p2=&b;
    p3=&c;

    if(*p1>*p2 && *p1>*p3)
    {
        largest=*p1;
    }
    else if(*p2>*p1 && *p2>*p3)
    {
        largest=*p2;
    }
    else
    {
        largest=*p3;
    }

    printf("Largest Number :: %d",largest);

    getch();
}

/*
Output:

Enter Three Numbers :: 10 25 15
Largest Number :: 25
*/