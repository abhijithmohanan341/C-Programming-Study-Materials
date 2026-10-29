// Write a C program to read a matrix using dynamic memory allocation
// and print its transpose.

#include<stdio.h>
#include<conio.h>
#include<alloc.h>

void main()
{
    int i,j,*a[10],r,c;

    clrscr();

    printf("Enter Array Size (Row-Col) ::\n");
    scanf("%d%d",&r,&c);

    printf("Enter Array Elements ::\n");

    for(i=0;i<r;i++)
    {
        a[i]=(int*)malloc(c*sizeof(int));

        for(j=0;j<c;j++)
        {
            scanf("%d",a[i]+j);
        }
    }

    printf("Array Elements are ::\n");

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",*(a[i]+j));
        }

        printf("\n");
    }

    printf("Transpose Array ::\n");

    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d\t",*(a[j]+i));
        }

        printf("\n");
    }

    getch();
}

/*
Output:

Enter Array Size (Row-Col) ::
2 3
Enter Array Elements ::
1 2 3
4 5 6

Array Elements are ::
1       2       3
4       5       6

Transpose Array ::
1       4
2       5
3       6
*/