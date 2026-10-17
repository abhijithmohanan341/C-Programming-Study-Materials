// QUESTION: DISPLAY A STRING AND FIND ITS LENGTH WITHOUT USING STRING FUNCTIONS

#include<stdio.h>
#include<conio.h>

void main()
{
    char str[50];
    int i, l = 0;

    clrscr();

    printf("Enter a string :: ");
    scanf("%s", str);

    printf("String is %s\n", str);

    for(i = 0; str[i] != '\0'; i++)  // '\0' indicates the end of a string
    {
        l++;
    }

    printf("String Length is %d", l);

    getch();
}

/*
OUTPUT:

Enter a string :: HELLO
String is HELLO
String Length is 5
*/