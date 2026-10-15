// Write a C program to check whether all diagonal elements
// of a square matrix are zero or not.

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
            if(a[i][i]!=0)
            {
                flag=0;
            }
        }

        if(flag==1)
        {
            printf("All Diagonal Elements Are Zero");
        }
        else
        {
            printf("All Diagonal Elements Are Not Zero");
        }
    }

    getch();
}