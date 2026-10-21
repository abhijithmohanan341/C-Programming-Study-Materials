# C Programming – Library Functions

## Definition
Library functions are predefined functions provided by C libraries. Include the appropriate header file before using them.

## Common Library Functions

| Function | Header file | Purpose |
|---|---|---|
| `printf()` | `stdio.h` | Displays formatted output |
| `scanf()` | `stdio.h` | Reads formatted input |
| `getchar()` | `stdio.h` | Reads one character from standard input |
| `putchar()` | `stdio.h` | Writes one character to standard output |
| `strlen()` | `string.h` | Returns string length, excluding the null character |
| `strcpy()` | `string.h` | Copies a string |
| `strcat()` | `string.h` | Appends one string to another |
| `strcmp()` | `string.h` | Compares two strings |
| `sqrt()` | `math.h` | Calculates square root |
| `pow()` | `math.h` | Calculates a number raised to a power |
| `ceil()` | `math.h` | Rounds a floating-point value upward |
| `floor()` | `math.h` | Rounds a floating-point value downward |
| `abs()` | `stdlib.h` | Returns the absolute value of an integer |
| `rand()` | `stdlib.h` | Generates a pseudo-random integer |
| `srand()` | `stdlib.h` | Seeds the pseudo-random number generator |
| `toupper()` | `ctype.h` | Converts a lowercase letter to uppercase when applicable |
| `tolower()` | `ctype.h` | Converts an uppercase letter to lowercase when applicable |
| `isalpha()` | `ctype.h` | Checks whether a character is alphabetic |
| `isdigit()` | `ctype.h` | Checks whether a character is a decimal digit |

## Common Header Files

| Header file | Purpose |
|---|---|
| `stdio.h` | Standard input/output functions |
| `string.h` | String-handling functions |
| `math.h` | Mathematical functions |
| `stdlib.h` | General utilities, conversions, memory management, and other functions |
| `ctype.h` | Character testing and conversion functions |
| `time.h` | Date and time functions |

## Important Notes

- Include the appropriate header file before using a library function.
- Check each function's required argument types and return type.
- Some compilers may require linking the math library when using `math.h` functions.
- `clrscr()` and `getch()` from `conio.h` are used in older Turbo C environments; they are not standard C library functions and may not be available in modern compilers.
