// Write a C program to find the area of a circle.

#include<stdio.h>
#include<conio.h>

void main()
{
    float r,area;

    printf("Enter Radius ::\n");
    scanf("%f",&r);

    area=3.14*r*r;

    printf("Area of Circle :: %.2f",area);

    getch();
}