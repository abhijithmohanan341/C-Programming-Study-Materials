// Find factors, sum of factors and count using while loop

#include<stdio.h>
#include<conio.h>

void main()
{
    int n,i=1,sum=0,count=0;
    clrscr();


    printf("Enter a Number ::\n");
    scanf("%d",&n);

    while(i<=n)
    {
        if(n%i==0)
        {
            printf("%d ",i);
            sum=sum+i;
            count++;
        }

        i++;
    }

    printf("\nSum of Factors :: %d",sum);
    printf("\nCount of Factors :: %d",count);

    getch();
}