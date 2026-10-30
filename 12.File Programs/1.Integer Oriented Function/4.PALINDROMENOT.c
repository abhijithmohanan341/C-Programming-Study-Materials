// Write a C program to read numbers from the user,
// store them in a file and separate palindrome and
// not palindrome numbers into two different files.

#include<stdio.h>
#include<conio.h>

void main()
{
    FILE *f1,*f2,*f3;
    int no,n,i,rev,temp,rem;

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
    f2=fopen("palindrome.txt","w");
    f3=fopen("notpalindrome.txt","w");

    printf("\nNumbers\n");

    while((no=getw(f1))!=EOF)
    {
        printf("%d\n",no);

        temp=no;
        rev=0;

        while(temp>0)
        {
            rem=temp%10;
            rev=rev*10+rem;
            temp=temp/10;
        }

        if(no==rev)
        {
            putw(no,f2);
        }
        else
        {
            putw(no,f3);
        }
    }

    fcloseall();

    printf("\nPalindrome Numbers\n");

    f2=fopen("palindrome.txt","r");

    while((no=getw(f2))!=EOF)
    {
        printf("%d\n",no);
    }

    fclose(f2);

    printf("\nNot Palindrome Numbers\n");

    f3=fopen("notpalindrome.txt","r");

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
121
123
454
567
121

Numbers
121
123
454
567
121

Palindrome Numbers
121
454
121

Not Palindrome Numbers
123
567
*/