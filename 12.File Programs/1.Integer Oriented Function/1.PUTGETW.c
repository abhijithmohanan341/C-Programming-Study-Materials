// Write a C program to read and write integer values
// into a file using getw() and putw() functions.

#include<stdio.h>
#include<conio.h>

void main()
{
    FILE *f1;
    int n,number,i;

    clrscr();

    f1=fopen("myfile.txt","w");

    printf("Enter No of Elements :: ");
    scanf("%d",&n);

    printf("\nEnter Values\n");

    printf("\nEnter Number :: ");

    for(i=0;i<n;i++)
    {
        scanf("%d",&number);
        putw(number,f1);
    }

    fclose(f1);

    f1=fopen("myfile.txt","r");

    printf("\nContent of File\n");

    while((number=getw(f1))!=EOF)
    {
        printf("%d\n",number);
    }

    fclose(f1);

    getch();
}

/*
Output:

Enter No of Elements :: 5

Enter Values

Enter Number :: 10
20
30
40
50

Content of File
10
20
30
40
50
*/