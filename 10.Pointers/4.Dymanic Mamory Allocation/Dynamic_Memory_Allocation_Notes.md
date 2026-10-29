# Dynamic Memory Allocation in C

## 1. Static Memory Allocation

Static memory allocation reserves memory according to the array size
declared in the program.

### Example from the handwritten notes

`int a[10];`

Assume the size of one `int` is **2 bytes**, as shown in the notes.

-   Array size: 10 elements
-   Size of each element: 2 bytes
-   Total memory: `10 × 2 = 20 bytes`

### Memory diagram

``` text
int a[10] — 20 bytes

       2 bytes per element
   +------+------+------+------+------+------+------+------+------+------+
   | a[0] | a[1] | a[2] | a[3] | a[4] | a[5] | a[6] | a[7] | a[8] | a[9] |
   +------+------+------+------+------+------+------+------+------+------+
```

### Example: Only 3 elements are needed

``` text
Memory reserved for 10 elements = 10 × 2 = 20 bytes
Memory needed for 3 elements    =  3 × 2 =  6 bytes
Unused memory                  = 20 − 6 = 14 bytes
```

``` text
           20 bytes reserved
   +------+------+------+-------------------------------------------+
   | Used | Used | Used |              Unused memory                |
   +------+------+------+-------------------------------------------+
      2 B    2 B    2 B                    14 bytes
```

The example illustrates that a fixed-size array may reserve memory that
is not used.

## 2. Dynamic Memory Allocation

Dynamic memory allocation allows memory to be allocated while the
program is running. The amount of memory can be based on the number of
elements required at runtime.

### Example from the handwritten notes

If `n = 5` and one `int` occupies 2 bytes:

``` text
Memory required = 5 × 2 = 10 bytes
```

### Memory diagram

``` text
             10 bytes allocated
   +------+------+------+------+------+
   |  0   |  1   |  2   |  3   |  4   |
   +------+------+------+------+------+
      2 B    2 B    2 B    2 B    2 B
```

Dynamic memory allocation requests memory according to the number of
elements needed, rather than declaring a fixed array size in advance.

## 3. Memory Allocation Functions

### `malloc()`

-   Full form: **Memory Allocation**.
-   Allocates a requested block of memory.
-   The allocated memory is not automatically initialized to zero.
-   Memory can be requested at runtime according to the program's
    requirements.

**Syntax:**

``` c
a=(int*)malloc(n*sizeof(int));
```

Here, `n` is the number of elements and `sizeof(int)` is the size of one
integer.

### `calloc()`

-   Full form: **Contiguous Allocation**.
-   Allocates memory for a requested number of elements.
-   Initializes the allocated memory to zero.

**Syntax:**

``` c
a=(int*)calloc(n,sizeof(int));
```

Here, `n` is the number of elements and `sizeof(int)` is the size of
each element.

## 4. Important Calculations from the Notes

  Situation                                Calculation       Result
  ----------------------------------- ---------------- ------------
  Fixed array of 10 integers            `10 × 2 bytes`   `20 bytes`
  Memory needed for 3 integers           `3 × 2 bytes`    `6 bytes`
  Unused memory in the fixed array      `20 − 6 bytes`   `14 bytes`
  Dynamic allocation for 5 integers      `5 × 2 bytes`   `10 bytes`

**Note:** The calculations above use the handwritten notes' assumption
that one `int` occupies 2 bytes. Actual `int` size depends on the
compiler and platform; many modern systems use 4 bytes.
