// Write a C program to append integer values into a file
// and display all values using putw() and getw() functions.

#include<stdio.h>
#include<conio.h>

void main()
{
    FILE *f1;
    int n,i,number;

    clrscr();

    f1=fopen("data.txt","w");

    printf("Enter No of Elements :: ");
    scanf("%d",&n);

    printf("Enter Values\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&number);
        putw(number,f1);
    }

    fclose(f1);

    f1=fopen("data.txt","a");

    printf("\nEnter No of Elements :: ");
    scanf("%d",&n);

    printf("Enter Values\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&number);
        putw(number,f1);
    }

    fclose(f1);

    f1=fopen("data.txt","r");

    printf("\nValues from File\n");

    while((number=getw(f1))!=EOF)
    {
        printf("%d\n",number);
    }

    fclose(f1);

    getch();
}