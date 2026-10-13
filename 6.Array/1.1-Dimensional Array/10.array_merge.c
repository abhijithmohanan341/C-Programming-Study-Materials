// Write a C program to merge two arrays into a single array.

#include<stdio.h>
#include<conio.h>

void main()
{
    int a[50],b[50],c[100];
    int n1,n2,i;

    clrscr();

    printf("Enter First Array Size :: ");
    scanf("%d",&n1);

    printf("Enter First Array Values\n");

    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter Second Array Size :: ");
    scanf("%d",&n2);

    printf("Enter Second Array Values\n");

    for(i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
    }

    for(i=0;i<n1;i++)
    {
        c[i]=a[i];
    }

    for(i=0;i<n2;i++)
    {
        c[n1+i]=b[i];
    }

    printf("Merged Array :: ");

    for(i=0;i<n1+n2;i++)
    {
        printf("%d ",c[i]);
    }

    getch();
}