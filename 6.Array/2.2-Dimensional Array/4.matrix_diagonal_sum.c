// Write a C program to print diagonal elements
// and find their sum.

#include<stdio.h>
#include<conio.h>

void main()
{
    int a[10][10],r,c,i,j,sum=0;

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

        printf("Diagonal Elements :: ");

        for(i=0;i<r;i++)
        {
            printf("%d ",a[i][i]);
            sum=sum+a[i][i];
        }

        printf("\nSum of Diagonal Elements = %d",sum);
    }

    getch();
}