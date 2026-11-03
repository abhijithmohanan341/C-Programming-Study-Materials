// Write a C program to read and write integer values
// into a file using putw() and getw() functions.

#include<stdio.h>
#include<conio.h>

void main()
{
    FILE *f1;
    int n,i,number;

    clrscr();

    f1=fopen("data.txt","w+");

    printf("Enter No of Elements :: ");
    scanf("%d",&n);

    printf("\nEnter Values\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&number);
        putw(number,f1);
    }

    rewind(f1);

    printf("\nValues are ::\n");

    while((number=getw(f1))!=EOF)
    {
        printf("%d\n",number);
    }

    fclose(f1);

    getch();
}