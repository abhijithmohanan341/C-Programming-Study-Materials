// Write a C program to print even and odd numbers
// and count them using a 1D array.

#include<stdio.h>
#include<conio.h>

void main()
{
    int a[50],n,i,even=0,odd=0;

    clrscr();

    printf("Enter Array Size :: ");
    scanf("%d",&n);

    printf("Enter Array Values\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Even Numbers :: ");

    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            printf("%d ",a[i]);
            even++;
        }
    }

    printf("\nOdd Numbers :: ");

    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            printf("%d ",a[i]);
            odd++;
        }
    }

    printf("\nEven Count = %d",even);
    printf("\nOdd Count = %d",odd);

    getch();
}