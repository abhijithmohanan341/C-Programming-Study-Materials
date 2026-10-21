# C Programming – User-Defined Functions

## 1. User-Defined Function

### Definition
A user-defined function is a function created by the programmer to perform a specific task. It can be called from another part of the program.

### General Structure
```c
return_type function_name(parameter_list);  // Function declaration

int main()
{
    function_name(arguments);               // Function calling
}

return_type function_name(parameter_list)   // Function definition
{
    statements;
    return value;                           // Used when the function returns a value
}
```

---

## 2. Function Having No Arguments and No Return Value

### Definition
This type of function does not receive any arguments and does not return a value to the calling function.

### Function Declaration
```c
void sum();
```

### Function Calling
```c
sum();
```

### Function Definition
```c
void sum()
{
    int a,b,c;

    printf("Enter Two Numbers ::\n");
    scanf("%d%d",&a,&b);

    c=a+b;

    printf("Sum :: %d\n",c);
}
```

---

## 3. Function Having Arguments and No Return Value

### Definition
This type of function receives arguments from the calling function but does not return a value.

### Function Declaration
```c
void sum(int,int);
```

### Function Calling
```c
sum(a,b);
```

### Function Definition
```c
void sum(int x,int y)
{
    int c;

    c=x+y;

    printf("Sum :: %d\n",c);
}
```

---

## 4. Function Having Arguments and Return Value

### Definition
This type of function receives arguments from the calling function and returns a value to it.

### Function Declaration
```c
int sum(int,int);
```

### Function Calling
```c
c=sum(a,b);
```

### Function Definition
```c
int sum(int x,int y)
{
    int c;

    c=x+y;

    return c;
}
```

---

## 5. Important Terms

- **Function declaration:** Informs the compiler about the function name, return type, and parameters.
- **Function calling:** Transfers control to the function to execute its statements.
- **Function definition:** Contains the statements that perform the task.
- **Arguments:** Values passed to a function when it is called.
- **Parameters:** Variables that receive the passed values in the function definition.
- **Return value:** The value sent back to the calling function using `return`.
- **`void`:** Indicates that a function does not return a value.

---

## 6. Summary

| Function type | Arguments received | Return value |
|---|---|---|
| No arguments and no return value | No | No |
| Arguments and no return value | Yes | No |
| Arguments and return value | Yes | Yes |
