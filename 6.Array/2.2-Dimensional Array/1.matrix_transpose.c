// Write a C program to read a matrix, print it and find its transpose.

#include<stdio.h>
#include<conio.h>

void main()
{
    int a[10][10],r,c,i,j;

    clrscr();

    printf("Enter Number of Rows and Columns :: ");
    scanf("%d%d",&r,&c);

    printf("Enter Matrix Elements\n");

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Matrix\n");

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    printf("Transpose Matrix\n");

    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }

    getch();
}