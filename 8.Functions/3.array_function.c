// Write a C program to pass a 1D array to a function
// and calculate the sum of array elements.

#include<stdio.h>
#include<conio.h>

void main()
{
    void sum(int [],int);

    int a[50],n,i;

    clrscr();

    printf("Enter Array Size :: ");
    scanf("%d",&n);

    printf("Enter Array Values\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    sum(a,n);

    getch();
}


void sum(int a[50],int n)
{
    int i,s=0;

    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }

    printf("\nSum of Array Elements :: %d",s);
}

/*
Output:

Enter Array Size :: 5
Enter Array Values
10 20 30 40 50

Sum of Array Elements :: 150
*/