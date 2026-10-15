// Write a C program to search an element in a matrix
// and count the number of times it occurs.

#include<stdio.h>
#include<conio.h>

void main()
{
    int a[10][10],r,c,i,j,search,count=0;

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

    printf("Enter Element to Search :: ");
    scanf("%d",&search);

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]==search)
            {
                count++;
            }
        }
    }

    if(count>0)
    {
        printf("Element Found");
        printf("\nNumber of Occurrences = %d",count);
    }
    else
    {
        printf("Element Not Found");
    }

    getch();
}