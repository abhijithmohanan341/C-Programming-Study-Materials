// PROGRAM: CHECK WHETHER A STRING IS PALINDROME USING STRING FUNCTIONS

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char str1[50], rev[50];

    clrscr();

    printf("Enter a string :: ");
    scanf("%s", &str1);

    strcpy(rev, str1);

    strrev(rev);

    printf("Reverse String is %s\n", rev);


    if(strcmp(str1,rev) == 0)
    {
        printf("String is Palindrome");
    }
    else
    {
        printf("String is Not Palindrome");
    }


    getch();
}


/*
OUTPUT 1:

Enter a string :: MADAM
String is Palindrome


OUTPUT 2:

Enter a string :: HELLO
String is Not Palindrome
*/