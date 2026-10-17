// QUESTION: REVERSE A STRING WITHOUT USING STRING FUNCTIONS

#include<stdio.h>
#include<conio.h>

void main()
{
    char str1[50], str2[50];
    int i, j = 0, l = 0;

    clrscr();

    printf("Enter a string :: ");
    scanf("%s", str1);

    printf("Original String is %s\n", str1);

    for(i = 0; str1[i] != '\0'; i++)
    {
        l++;
    }

    for(i = l - 1; i >= 0; i--)
    {
        str2[j] = str1[i];
        j++;
    }

    str2[j] = '\0';

    printf("String Reverse is %s\n", str2);

    getch();
}

/*
OUTPUT:

Enter a string :: HELLO
Original String is HELLO
String Reverse is OLLEH
*/