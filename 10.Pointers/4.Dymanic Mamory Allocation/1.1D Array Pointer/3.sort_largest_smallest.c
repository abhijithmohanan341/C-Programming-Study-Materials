// Write a C program to sort an array in ascending order
// and find the largest and smallest elements.

#include<stdio.h>
#include<conio.h>
#include<alloc.h>

void main()
{
    int i,j,n,*a,temp;

    clrscr();

    printf("Enter Array Size :: ");
    scanf("%d",&n);

    a=(int*)malloc(n*sizeof(int));

    printf("Enter Array Elements ::\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(*(a+i)>*(a+j))
            {
                temp=*(a+i);
                *(a+i)=*(a+j);
                *(a+j)=temp;
            }
        }
    }

    printf("Sorted Array ::\n");

    for(i=0;i<n;i++)
    {
        printf("%d ",*(a+i));
    }

    printf("\nSmallest :: %d",*a);
    printf("\nLargest :: %d",*(a+n-1));

    getch();
}

/*
Output:

Enter Array Size :: 5
Enter Array Elements ::
30 10 50 20 40

Sorted Array ::
10 20 30 40 50
Smallest :: 10
Largest :: 50
*/