
// PROGRAM: STRING HANDLING FUNCTIONS

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    // VARIABLE DECLARATION

    char str1[100], str2[100];
    int l;

    clrscr();


    // 1. READING AND DISPLAYING A STRING

    printf("Enter a string :: ");
    scanf("%s", str1);

    printf("String is %s\n", str1);


    // 2. FINDING THE LENGTH OF A STRING

    l = strlen(str1);

    printf("String Length is %d\n", l);


    // 3. COPYING A STRING

    strcpy(str2, str1);

    printf("Copied String is %s\n", str2);


    // 4. REVERSING A STRING

    strrev(str1);

    printf("Reverse String is %s\n", str1);


    // 5. COMPARING TWO STRINGS

    printf("\nEnter String-1 :: ");
    scanf("%s", str1);

    printf("Enter String-2 :: ");
    scanf("%s", str2);

    if(strcmp(str1, str2) == 0)
    {
        printf("Strings Are Equal\n");
    }
    else
    {
        printf("Strings Are Not Equal\n");
    }


    // 6. CONCATENATING TWO STRINGS
    
    printf("\nEnter String-1 :: ");
    scanf("%s", str1);

    printf("Enter String-2 :: ");
    scanf("%s", str2);

    strcat(str1, str2);

    printf("New String is %s\n", str1);


    getch();
}


/*
OUTPUT:

Enter a string :: HELLO
String is HELLO
String Length is 5
Copied String is HELLO
Reverse String is OLLEH

Enter String-1 :: HELLO
Enter String-2 :: HELLO
Strings Are Equal

Enter String-1 :: GOOD
Enter String-2 :: MORNING
New String is GOODMORNING
*/