// Write a C program to pass a 2D array to a function
// and display the matrix elements.

#include<stdio.h>
#include<conio.h>

void main()
{
    void matrix(int [][50],int,int);

    int a[50][50],r,c,i,j;

    clrscr();

    printf("Enter Array Size (Row - Col) :: ");
    scanf("%d%d",&r,&c);

    printf("Enter Array Values\n");

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    matrix(a,r,c);

    getch();
}

void matrix(int a[][50],int r,int c)
{
    int i,j;

    printf("\nMatrix is\n");

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }

        printf("\n");
    }
}

/*
Output:

Enter Array Size (Row - Col) :: 2 3
Enter Array Values
10 20 30
40 50 60

Matrix is
10      20      30
40      50      60
*/