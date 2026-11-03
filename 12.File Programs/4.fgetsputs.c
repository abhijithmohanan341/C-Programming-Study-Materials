// Write a C program to read and write strings into a file
// using fgets() and fputs() functions.

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    FILE *f1;
    char name[100];

    clrscr();

    f1=fopen("myfile.txt","w");

    printf("Enter Names :: Stop to Exit\n");

    for(;;)
    {
        gets(name);

        fflush(stdin);

        if(strcmp(name,"stop")==0)
        {
            break;
        }

        fputs(name,f1);
        putc('\n',f1);
    }

    fclose(f1);

    f1=fopen("myfile.txt","r");

    printf("\nContent of File\n");

    while((fgets(name,80,f1))!=NULL)
    {
        puts(name);
    }

    fclose(f1);

    getch();
}

/*
Output:

Enter Names :: Stop to Exit

Arun
Amal
Rahul
stop

Content of File
Arun

Amal

Rahul
*/