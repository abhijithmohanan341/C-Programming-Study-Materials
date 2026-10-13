// Write a C program to search an element in a 1D array
// and count the number of times it occurs.

#include<stdio.h>
#include<conio.h>

void main()
{
    int a[50],n,i,search,count=0;

    clrscr();

    printf("Enter Array Size :: ");
    scanf("%d",&n);

    printf("Enter Array Values\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter Element to Search :: ");
    scanf("%d",&search);

    for(i=0;i<n;i++)
    {
        if(a[i]==search)
        {
            count++;
        }
    }

    if(count>0)
    {
        printf("Element Found");
        printf("\nNumber of Occurrences = %d",count);
    }
    else
    {
        printf("Element Not Found");
    }

    getch();
}