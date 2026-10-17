// QUESTION: COUNT THE NUMBER OF VOWELS IN A STRING

#include<stdio.h>
#include<conio.h>

void main()
{
    char str[50];
    int i, count = 0;

    clrscr();

    printf("Enter a string :: ");
    scanf("%s", str);

    printf("String is %s\n", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
           str[i] == 'o' || str[i] == 'u' ||
           str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
           str[i] == 'O' || str[i] == 'U')
        {
            count++;
        }
    }

    printf("Number of Vowels is %d", count);

    getch();
}

/*
OUTPUT:

Enter a string :: EDUCATION
String is EDUCATION
Number of Vowels is 5
*/