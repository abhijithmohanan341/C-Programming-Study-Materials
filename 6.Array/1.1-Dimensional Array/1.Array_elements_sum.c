// Write a C program to find the sum of array elements
// using a 1D array.

#include<stdio.h>
#include<conio.h>

void main()
{
    int a[50], n, i, sum = 0;

    printf("Enter Array Size :: ");
    scanf("%d", &n);

    printf("Enter Array Values\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nElements\tPosition\n");

    for (i = 0; i < n; i++)
    {
        printf("%d\t\t%d\n", a[i], i);
        sum = sum + a[i];
    }

    printf("\nSum = %d\n", sum);

    getch();
}