// Print 1 to N, Sum and Average using while loop

#include<stdio.h>
#include<conio.h>

void main()
{
    int i,n,sum=0;
    float avg;

    printf("Enter the value of n::\n");
    scanf("%d",&n);

    i=1;

    while(i<=n)
    {
        printf("%d ",i);
        sum=sum+i;
        i++;
    }

    avg=(float)sum/n;

    printf("\nSum :: %d",sum);
    printf("\nAverage :: %.2f",avg);

    getch();
}