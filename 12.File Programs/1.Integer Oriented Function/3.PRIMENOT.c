// Write a C program to read numbers from the user,
// store them in a file and separate prime and not prime
// numbers into two different files using file handling.

#include<stdio.h>
#include<conio.h>

void main()
{
    FILE *f1,*f2,*f3;
    int no,n,i,j,flag;

    clrscr();

    f1=fopen("data.txt","w");

    printf("Enter Limit :: ");
    scanf("%d",&n);

    printf("\nEnter Number :: ");

    for(i=0;i<n;i++)
    {
        scanf("%d",&no);
        putw(no,f1);
    }

    fclose(f1);

    f1=fopen("data.txt","r");
    f2=fopen("prime.txt","w");
    f3=fopen("notprime.txt","w");

    printf("\nNumbers\n");

    while((no=getw(f1))!=EOF)
    {
        printf("%d\n",no);

        flag=1;

        if(no<=1)
        {
            flag=0;
        }
        else
        {
            for(j=2;j<no;j++)
            {
                if(no%j==0)
                {
                    flag=0;
                    break;
                }
            }
        }

        if(flag==1)
        {
            putw(no,f2);
        }
        else
        {
            putw(no,f3);
        }
    }

    fcloseall();

    printf("\nPrime Numbers\n");

    f2=fopen("prime.txt","r");

    while((no=getw(f2))!=EOF)
    {
        printf("%d\n",no);
    }

    fclose(f2);

    printf("\nNot Prime Numbers\n");

    f3=fopen("notprime.txt","r");

    while((no=getw(f3))!=EOF)
    {
        printf("%d\n",no);
    }

    fclose(f3);

    getch();
}

/*
Output:

Enter Limit :: 5

Enter Number ::
10
7
15
11
20

Numbers
10
7
15
11
20

Prime Numbers
7
11

Not Prime Numbers
10
15
20
*/