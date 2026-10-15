// Write a C program to print upper and lower triangular matrices.

#include<stdio.h>
#include<conio.h>

void main()
{
    int a[10][10],r,c,i,j;

    clrscr();

    printf("Enter Number of Rows and Columns :: ");
    scanf("%d%d",&r,&c);

    if(r!=c)
    {
        printf("Not a Square Matrix");
    }
    else
    {
        printf("Enter Matrix Elements\n");

        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }

        printf("Upper Triangular Matrix\n");

        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(i<=j)
                {
                    printf("%d\t",a[i][j]);
                }
                else
                {
                    printf("0\t");
                }
            }
            printf("\n");
        }

        printf("Lower Triangular Matrix\n");

        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(i>=j)
                {
                    printf("%d\t",a[i][j]);
                }
                else
                {
                    printf("0\t");
                }
            }
            printf("\n");
        }
    }

    getch();
}