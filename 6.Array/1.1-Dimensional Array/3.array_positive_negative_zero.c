// Write a C program to count positive, negative and zero
// elements using a 1D array.

#include<stdio.h>
#include<conio.h>

void main()
{
    int a[50],n,i,pos=0,neg=0,zero=0;

    clrscr();

    printf("Enter Array Size :: ");
    scanf("%d",&n);

    printf("Enter Array Values\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            pos++;
        }
        else if(a[i]<0)
        {
            neg++;
        }
        else
        {
            zero++;
        }
    }

    printf("Positive Count = %d",pos);
    printf("\nNegative Count = %d",neg);
    printf("\nZero Count = %d",zero);

    getch();
}