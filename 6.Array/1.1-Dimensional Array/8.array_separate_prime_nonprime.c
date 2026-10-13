// Write a C program to separate prime and non-prime numbers
// into two different arrays.

#include<stdio.h>
#include<conio.h>

void main()
{
    int a[50],prime[50],nonprime[50];
    int n,i,j,count,p=0,np=0;

    clrscr();

    printf("Enter Array Size :: ");
    scanf("%d",&n);

    printf("Enter Array Values\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        count=0;

        for(j=1;j<=a[i];j++)
        {
            if(a[i]%j==0)
            {
                count++;
            }
        }

        if(count==2)
        {
            prime[p]=a[i];
            p++;
        }
        else
        {
            nonprime[np]=a[i];
            np++;
        }
    }

    printf("Prime Array :: ");

    for(i=0;i<p;i++)
    {
        printf("%d ",prime[i]);
    }

    printf("\nNon-Prime Array :: ");

    for(i=0;i<np;i++)
    {
        printf("%d ",nonprime[i]);
    }

    getch();
}