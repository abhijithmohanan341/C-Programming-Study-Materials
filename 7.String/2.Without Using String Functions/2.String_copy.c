// QUESTION: COPY ONE STRING INTO ANOTHER WITHOUT USING STRING FUNCTIONS

#include<stdio.h>
#include<conio.h>

void main()
{
    char str1[50], str2[50];
    int i;

    clrscr();

    printf("Enter a string :: ");
    scanf("%s", &str1);

    for(i = 0; str1[i] != '\0'; i++)
    {
        str2[i] = str1[i];
    }

    str2[i] = '\0';  // Add null character to indicate the end of the string.

    printf("Original String is %s\n", str1);
    printf("Copied String is %s", str2);

    getch();
}

/*
OUTPUT:

Enter a string :: HELLO
Original String is HELLO
Copied String is HELLO
*/