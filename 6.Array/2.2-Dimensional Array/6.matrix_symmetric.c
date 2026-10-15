// Write a C program to check whether a matrix is symmetric or not.

#include<stdio.h>
#include<conio.h>

void main()
{
    int a[10][10],r,c,i,j,flag=1;

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

        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(a[i][j]!=a[j][i])
                {
                    flag=0;
                }
            }
        }

        if(flag==1)
        {
            printf("Symmetric Matrix");
        }
        else
        {
            printf("Not a Symmetric Matrix");
        }
    }

    getch();
}