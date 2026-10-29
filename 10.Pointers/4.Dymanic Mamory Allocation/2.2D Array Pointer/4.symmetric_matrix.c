// Write a C program to check whether a matrix is symmetric
// using dynamic memory allocation.

#include<stdio.h>
#include<conio.h>
#include<alloc.h>

void main()
{
    int i,j,r,c,*a[10],flag=1;

    clrscr();

    printf("Enter Matrix Size (Row-Col) :: ");
    scanf("%d%d",&r,&c);

    if(r==c)
    {
        printf("Enter Matrix Elements ::\n");

        for(i=0;i<r;i++)
        {
            a[i]=(int*)malloc(c*sizeof(int));

            for(j=0;j<c;j++)
            {
                scanf("%d",a[i]+j);
            }
        }

        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(*(a[i]+j)!=*(a[j]+i))
                {
                    flag=0;
                }
            }
        }

        if(flag==1)
        {
            printf("Matrix is Symmetric");
        }
        else
        {
            printf("Matrix is Not Symmetric");
        }
    }
    else
    {
        printf("Matrix is Not Square");
    }

    getch();
}

/*
Output:

Enter Matrix Size (Row-Col) :: 3 3
Enter Matrix Elements ::
1 2 3
2 4 5
3 5 6

Matrix is Symmetric
*/