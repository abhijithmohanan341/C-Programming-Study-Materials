// Write a C program to sort an array in ascending and descending order.

#include<stdio.h>
#include<conio.h>

void main()
{
    int a[50],n,i,j,temp;

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
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    printf("Ascending Order :: ");

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    printf("\nDescending Order :: ");

    for(i=n-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }

    getch();
}