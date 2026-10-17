// QUESTION: CONCATENATE TWO STRINGS WITHOUT USING STRING FUNCTIONS

#include<stdio.h>
#include<conio.h>

void main()
{
    char str1[100], str2[50];
    int i, j, l=0;

    clrscr();

    printf("Enter String-1 :: ");
    scanf("%s", str1);

    printf("Enter String-2 :: ");
    scanf("%s", str2);

    printf("String-1 is %s\n", str1);
    printf("String-2 is %s\n", str2);

    for(i = 0; str1[i] != '\0'; i++);
    {
        l++;
    }

    for(i = l,j=0; str2[j] != '\0'; i++,j++)
    {
        str1[i] = str2[j];
    }

    str1[i] = '\0';

    printf("Concatenated String is %s\n", str1);

    getch();
}

/*
OUTPUT:

Enter String-1 :: GOOD
Enter String-2 :: MORNING
String-1 is GOOD
String-2 is MORNING
Concatenated String is GOODMORNING
*/