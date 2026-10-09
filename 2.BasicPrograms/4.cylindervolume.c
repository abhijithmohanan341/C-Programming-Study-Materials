// Calculate Volume of a Cylinder

#include<stdio.h>
#include<conio.h>

void main()
{
    float r, h, volume;

    printf("Enter Radius ::\n");
    scanf("%f",&r);

    printf("Enter Height ::\n");
    scanf("%f",&h);

    volume=3.14*r*r*h;

    printf("Volume of Cylinder :: %f",volume);

    getch();
}