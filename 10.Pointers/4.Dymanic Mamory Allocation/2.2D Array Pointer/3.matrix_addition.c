// Write a C program to add two matrices using dynamic memory allocation.

#include<stdio.h>
#include<conio.h>
#include<alloc.h>

void main()
{
    int i,j,r1,c1,r2,c2,*a[10],*b[10],*sum[10];

    clrscr();

    printf("Enter First Matrix Size (Row-Col) :: ");
    scanf("%d%d",&r1,&c1);

    printf("Enter Second Matrix Size (Row-Col) :: ");
    scanf("%d%d",&r2,&c2);

    if(r1==r2&&c1==c2)
    {
        printf("Enter First Matrix Elements ::\n");

        for(i=0;i<r1;i++)
        {
            a[i]=(int*)malloc(c1*sizeof(int));

            for(j=0;j<c1;j++)
            {
                scanf("%d",a[i]+j);
            }
        }

        printf("Enter Second Matrix Elements ::\n");

        for(i=0;i<r2;i++)
        {
            b[i]=(int*)malloc(c2*sizeof(int));
            sum[i]=(int*)malloc(c2*sizeof(int));

            for(j=0;j<c2;j++)
            {
                scanf("%d",b[i]+j);
            }
        }

        printf("Sum of Two Matrices ::\n");

        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                *(sum[i]+j)=*(a[i]+j)+*(b[i]+j);
                printf("%d\t",*(sum[i]+j));
            }

            printf("\n");
        }
    }
    else
    {
        printf("Matrix Addition Not Possible");
    }

    getch();
}

/*
Output:

Enter First Matrix Size (Row-Col) :: 2 2
Enter Second Matrix Size (Row-Col) :: 2 2
Enter First Matrix Elements ::
1 2
3 4
Enter Second Matrix Elements ::
5 6
7 8

Sum of Two Matrices ::
6       8
10      12
*/