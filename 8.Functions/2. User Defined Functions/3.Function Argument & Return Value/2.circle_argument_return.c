// Write a C program to calculate the area of a circle
// using a function having arguments and return value.

#include<stdio.h>
#include<conio.h>

void main()
{
    float area(float);

    float r,a;

    clrscr();

    printf("Enter Radius :: ");
    scanf("%f",&r);

    a=area(r);

    printf("Area of Circle :: %.2f",a);

    getch();
}

float area(float r)
{
    float a;

    a=3.14*r*r;

    return a;
}

/*
Output:

Enter Radius :: 5
Area of Circle :: 78.50
*/