// Write a C program to read numbers from the user,
// store them in a file and separate even and odd numbers
// into two different files using file handling.

#include<stdio.h>
#include<conio.h>

void main()
{
    FILE *f1,*f2,*f3;
    int no,n,i;

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

    printf("\nValues\n");

    f1=fopen("data.txt","r");
    f2=fopen("even.txt","w");
    f3=fopen("odd.txt","w");

    while((no=getw(f1))!=EOF)
    {
        printf("%d\n",no);

        if(no%2==0)
        {
            putw(no,f2);
        }
        else
        {
            putw(no,f3);
        }
    }

    fcloseall();

    printf("\nEven Numbers\n");

    f2=fopen("even.txt","r");

    while((no=getw(f2))!=EOF)
    {
        printf("%d\n",no);
    }

    fclose(f2);

    printf("\nOdd Numbers\n");

    f3=fopen("odd.txt","r");

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
15
20
25
30

Values
10
15
20
25
30

Even Numbers
10
20
30

Odd Numbers
15
25
*/