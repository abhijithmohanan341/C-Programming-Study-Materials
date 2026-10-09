// Calculate Volume of a Cube

#include<stdio.h>
#include<conio.h>

void main()
{
    float side, volume;

    printf("Enter Side ::\n");
    scanf("%f",&side);

    volume=side*side*side;

    printf("Volume of Cube :: %f",volume);

    getch();
}