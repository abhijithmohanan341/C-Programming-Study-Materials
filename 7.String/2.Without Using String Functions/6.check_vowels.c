```c
// QUESTION: COUNT AND PRINT EACH VOWEL IN A STRING

#include<stdio.h>
#include<conio.h>

void main()
{
    char str[50];
    int i, a = 0, e = 0, in = 0, o = 0, u = 0;

    clrscr();

    printf("Enter a string :: ");
    scanf("%s", str);

    printf("String is %s\n", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == 'a' || str[i] == 'A')
        {
            printf("a ");
            a++;
        }
        else if(str[i] == 'e' || str[i] == 'E')
        {
            printf("e ");
            e++;
        }
        else if(str[i] == 'i' || str[i] == 'I')
        {
            printf("i ");
            in++;
        }
        else if(str[i] == 'o' || str[i] == 'O')
        {
            printf("o ");
            o++;
        }
        else if(str[i] == 'u' || str[i] == 'U')
        {
            printf("u ");
            u++;
        }
    }

    printf("\nNumber of a vowels is %d", a);
    printf("\nNumber of e vowels is %d", e);
    printf("\nNumber of i vowels is %d", in);
    printf("\nNumber of o vowels is %d", o);
    printf("\nNumber of u vowels is %d", u);

    getch();
}

/*
OUTPUT:

Enter a string :: EDUCATION
String is EDUCATION
e u a i o
Number of a vowels is 1
Number of e vowels is 1
Number of i vowels is 1
Number of o vowels is 1
Number of u vowels is 1
*/
```
