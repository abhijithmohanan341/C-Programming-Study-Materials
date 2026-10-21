// Write a C program to calculate the area of a circle
// using a function having arguments and no return value.

#include<stdio.h>
#include<conio.h>

void main()
{
    void area(float);

    float r;

    clrscr();

    printf("Enter Radius :: ");
    scanf("%f",&r);

    area(r);

    getch();
}

void area(float r)
{
    float a;

    a=3.14*r*r;

    printf("Area of Circle :: %.2f",a);
}

/*
Output:

Enter Radius :: 5
Area of Circle :: 78.50
*/