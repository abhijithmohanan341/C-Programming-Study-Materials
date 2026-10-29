// Write a C program to read array elements using dynamic memory allocation,
// display the array elements and find their sum.

#include<stdio.h>
#include<conio.h>
#include<alloc.h>

void main()
{
    int i,n,*a,sum=0;

    clrscr();

    printf("Enter the Array Size ::\n");
    scanf("%d",&n);

    a=(int*)malloc(n*sizeof(int));

    printf("Enter Array Elements ::\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }

    printf("Array Elements are ::\n");

    for(i=0;i<n;i++)
    {
        printf("%d ",*(a+i));

        sum=sum+*(a+i);
    }

    printf("\nSum of Array Elements :: %d",sum);

    getch();
}

/*
Output:

Enter the Array Size ::
5
Enter Array Elements ::
10 20 30 40 50
Array Elements are ::
10 20 30 40 50
Sum of Array Elements :: 150
*/