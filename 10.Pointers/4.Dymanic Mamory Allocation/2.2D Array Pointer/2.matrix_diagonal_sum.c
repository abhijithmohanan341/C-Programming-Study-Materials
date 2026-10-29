// Write a C program to print the diagonal elements of a matrix
// and find their sum using dynamic memory allocation.

#include<stdio.h>
#include<conio.h>
#include<alloc.h>

void main()
{
    int i,j,r,c,*a[10],sum=0;

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

        printf("Diagonal Elements ::\n");

        for(i=0;i<r;i++)
        {
            printf("%d ",*(a[i]+i));
            sum=sum+*(a[i]+i);
        }

        printf("\nSum of Diagonal Elements :: %d",sum);

    }
    else
    {
        printf("Diagonal Elements Not Possible");
    }

    getch();
}

/*
Output:

Enter Matrix Size (Row-Col) :: 3 3
Enter Matrix Elements ::
1 2 3
4 5 6
7 8 9

Diagonal Elements ::
1 5 9
Sum of Diagonal Elements :: 15
*/