# C Programming – Quick Notes

## 1. Basic Structure

```c
#include<stdio.h>
#include<conio.h>

void main()
{
    // Write program statements here

    getch();
}
```

- `#include<stdio.h>` – Provides `printf()` and `scanf()`.
- `#include<conio.h>` – Used for `getch()` in some older compilers.
- `void main()` – Starting function in the style used for these class examples.
- `{ }` – Marks the beginning and end of a block.
- `getch()` – Waits for a key press in supported compilers.

**Note:** `void main()`, `conio.h`, and `getch()` are not part of standard C. Standard C uses `int main(void)` and `return 0;`.

## 2. Header Files

A header file provides declarations for functions used in a program.

| Header file | Use |
|---|---|
| `stdio.h` | Input and output functions such as `printf()` and `scanf()` |
| `conio.h` | Console functions such as `getch()` in some older compilers |
| `math.h` | Mathematical functions |
| `string.h` | String functions |

## 3. Data Types

A data type tells C what kind of value a variable stores.

| Data type | Stores | Example |
|---|---|---|
| `int` | Whole numbers | `int age = 20;` |
| `float` | Decimal numbers | `float mark = 85.5;` |
| `char` | One character | `char grade = 'A';` |
| `double` | Decimal numbers with more precision | `double pi = 3.14159;` |

## 4. Output: `printf()`

`printf()` displays information on the screen.

**Syntax:**

```c
printf("control string", variable_list);
```

- **Control string:** Text and conversion specifiers that describe what to display.
- **Variable list:** Variables whose values should be displayed.

Example:

```c
printf("Age = %d", age);
```

## 5. Input: `scanf()`

`scanf()` reads input entered by the user.

**Syntax:**

```c
scanf("control string", input_variable_list);
```

- **Control string:** Conversion specifiers that tell C what type of input to read.
- **Input variable list:** Addresses of the variables where input is stored.

Example:

```c
scanf("%d", &age);
```

Use `&` before most variables in `scanf()`. For a character array read with `%s`, use the array name without `&`.

## 6. Common Format Specifiers

| Specifier | Use | Example |
|---|---|---|
| `%d` | Integer (`int`) | `10` |
| `%f` | Float input / decimal output | `25.50` |
| `%c` | One character | `A` |
| `%s` | String (word) | `Arun` |

Examples:

```c
scanf("%d", &n);        // Read an integer
scanf("%f", &price);    // Read a float
scanf(" %c", &grade);   // Read a character
scanf("%49s", name);    // Read a word into char name[50]

printf("%d", n);        // Display an integer
printf("%f", price);   // Display a decimal value
printf("%c", grade);   // Display a character
printf("%s", name);    // Display a string
```

- In `scanf()`, use `%f` for `float` and `%lf` for `double`.
- In `printf()`, use `%f` to display a floating-point value.
- `%s` reads only until whitespace, so it reads one word.

## 7. Useful Escape Sequence

| Sequence | Meaning |
|---|---|
| `\n` | Moves output to a new line |
| `\t` | Adds a tab space |

Example:

```c
printf("Hello\nWorld");
```

Output:

```text
Hello
World
```

## 8. Basic Operators

| Operator | Meaning | Example |
|---|---|---|
| `+` | Addition | `a + b` |
| `-` | Subtraction | `a - b` |
| `*` | Multiplication | `a * b` |
| `/` | Division | `a / b` |
| `%` | Remainder | `a % b` |
| `=` | Assign a value | `a = 10;` |
| `==` | Check equality | `a == b` |
| `>` | Greater than | `a > b` |
| `<` | Less than | `a < b` |
| `&&` | AND | `a > 0 && b > 0` |
| `||` | OR | `a > 0 || b > 0` |
| `!` | NOT | `!(a > 0)` |

## 9. Remember

1. C is case-sensitive: `Age` and `age` are different.
2. Most statements end with a semicolon (`;`).
3. Use double quotes for strings: `"Hello"`.
4. Use single quotes for one character: `'A'`.
5. Choose the correct data type and format specifier.
6. Initialize variables before using their values.

**End of Quick Notes**
