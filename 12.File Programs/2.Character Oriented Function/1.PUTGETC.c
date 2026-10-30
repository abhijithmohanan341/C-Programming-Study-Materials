// Write a C program to write and read characters
// from a file using putc() and getc() functions.

#include<stdio.h>
#include<conio.h>

void main()
{
    FILE *f1;
    char ch;

    clrscr();

    f1=fopen("myfile.txt","w");

    printf("Enter a line of text\n");

    while((ch=getchar())!='\n')
    {
        putc(ch,f1);
    }

    fclose(f1);

    f1=fopen("myfile.txt","r");

    printf("\nContent of File\n");

    while((ch=getc(f1))!=EOF)
    {
        printf("%c",ch);
    }

    fclose(f1);

    getch();
}

/*
Output:

Enter a line of text
Hello World

Content of File
Hello World
*/