// Write a C program to read array elements using dynamic memory allocation
// and find the largest and smallest elements.

#include<stdio.h>
#include<conio.h>
#include<alloc.h>

void main()
{
    int i,n,*a,largest,smallest;

    clrscr();

    printf("Enter the Array Size ::\n");
    scanf("%d",&n);

    a=(int*)malloc(n*sizeof(int));

    printf("Enter Array Elements ::\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }

    largest=smallest=*a;

    for(i=0;i<n;i++)
    {
        if(*(a+i)>largest)
        {
            largest=*(a+i);
        }

        if(*(a+i)<smallest)
        {
            smallest=*(a+i);
        }
    }

    printf("Largest Element :: %d",largest);
    printf("\nSmallest Element :: %d",smallest);

    getch();
}

/*
Output:

Enter the Array Size ::
5
Enter Array Elements ::
10 25 5 40 15

Largest Element :: 40
Smallest Element :: 5
*/