// Write a C program to multiply two matrices.

#include<stdio.h>
#include<conio.h>

void main()
{
    int a[10][10],b[10][10],mul[10][10];
    int r1,c1,r2,c2,i,j,k;

    clrscr();

    printf("Enter Rows and Columns of First Matrix :: ");
    scanf("%d%d",&r1,&c1);

    printf("Enter Rows and Columns of Second Matrix :: ");
    scanf("%d%d",&r2,&c2);

    if(c1!=r2)
    {
        printf("Matrix Multiplication Not Possible");
    }
    else
    {
        printf("Enter First Matrix Elements\n");

        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }

        printf("Enter Second Matrix Elements\n");

        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }

        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                mul[i][j]=0;

                for(k=0;k<c1;k++)
                {
                    mul[i][j]=mul[i][j]+a[i][k]*b[k][j];
                }
            }
        }

        printf("Multiplication Matrix\n");

        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%d\t",mul[i][j]);
            }
            printf("\n");
        }
    }

    getch();
}