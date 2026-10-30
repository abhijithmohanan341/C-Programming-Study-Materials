// Write a C program to read a line of text from the user,
// store it in a file and separate vowels and consonants
// into two different files using putc() and getc().

#include<stdio.h>
#include<conio.h>

void main()
{
    FILE *f1,*f2,*f3;
    char c;

    clrscr();

    f1=fopen("myfile.txt","w");

    printf("Enter a line of text\n");

    while((c=getchar())!='\n')
    {
        putc(c,f1);
    }

    fclose(f1);

    f1=fopen("myfile.txt","r");
    f2=fopen("vow.txt","w");
    f3=fopen("cons.txt","w");

    printf("\nContent of File\n");

    while((c=getc(f1))!=EOF)
    {
        printf("%c",c);

        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
        {
            putc(c,f2);
        }
        else
        {
            putc(c,f3);
        }
    }

    fcloseall();

    f2=fopen("vow.txt","r");

    printf("\n\nContent of File Vowel\n");

    while((c=getc(f2))!=EOF)
    {
        printf("%c",c);
    }

    fclose(f2);

    f3=fopen("cons.txt","r");

    printf("\n\nContent of File Consonants\n");

    while((c=getc(f3))!=EOF)
    {
        printf("%c",c);
    }

    fclose(f3);

    getch();
}

/*
Output:

Enter a line of text
hello world

Content of File
hello world

Content of File Vowel
eoo

Content of File Consonants
hll wrld
*/