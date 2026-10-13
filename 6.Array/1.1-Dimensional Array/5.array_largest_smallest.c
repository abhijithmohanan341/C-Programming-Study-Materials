// Write a C program to find the largest and smallest
// elements in a 1D array.

#include<stdio.h>
#include<conio.h>

void main()
{
    int a[50],n,i,largest,smallest;

    clrscr();

    printf("Enter Array Size :: ");
    scanf("%d",&n);

    printf("Enter Array Values\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    largest=a[0];
    smallest=a[0];

    for(i=1;i<n;i++)
    {
        if(a[i]>largest)
        {
            largest=a[i];
        }

        if(a[i]<smallest)
        {
            smallest=a[i];
        }
    }

    printf("Largest Element = %d",largest);
    printf("\nSmallest Element = %d",smallest);

    getch();
}