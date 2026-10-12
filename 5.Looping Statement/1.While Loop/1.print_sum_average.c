// Print 1 to N, Sum and Average using while loop

#include<stdio.h>
#include<conio.h>

void main()
{
    int i=1,n,sum=0;
    float avg;
    clrscr();


    printf("Enter the value of n::\n");
    scanf("%d",&n);

    while(i<=n)
    {
        printf("%d",i);
        sum=sum+i;
        i++;
    }

    avg=sum/n;

    printf("\nSum :: %d",sum);
    printf("\nAverage :: %.2f",avg);

    getch();
}