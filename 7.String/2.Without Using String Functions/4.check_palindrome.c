// QUESTION: CHECK WHETHER A STRING IS PALINDROME OR NOT WITHOUT USING STRING FUNCTIONS

#include<stdio.h>
#include<conio.h>

void main()
{
    char str1[50], str2[50];
    int i, j = 0, l = 0, flag = 0;

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

    printf("Reverse String is %s\n", str2);

    for(i = 0,j = 0;str1[i] != '\0';i++,j++)
    {
        if(str1[i] != str2[i])
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
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
Original String is MADAM
Reverse String is MADAM
String is Palindrome


OUTPUT 2:

Enter a string :: HELLO
Original String is HELLO
Reverse String is OLLEH
String is Not Palindrome
*/