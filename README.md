# C-PROGRAMMING-JOURNEY
My C programming learning journey, including notes, examples, and practice programs from basic to advanced concepts.

## 1. First C Program

A C program starts execution from the main() function.

### Key Components
- #include <stdio.h> : Standard input/output header file
- main() : Entry point of the program
- printf() : Used to display output
- return 0 : Indicates successful execution

Example:
```c
#include <stdio.h>

int main() {
    printf("Hello World");
    return 0;
}

## 1. Variables

Variables are used to store data in memory.

### Key Points

* Stores values that can change during program execution
* Every variable has a data type
* Must be declared before use

Example:

```c
int age = 20;
float marks = 95.5;
```

---

## 2. Variable Naming Rules

Variable names must follow specific rules.

### Rules

* Can contain letters, digits, and underscore (_)
* Cannot start with a digit
* Cannot contain special characters
* Cannot use C keywords
* Variable names are case-sensitive

Valid Examples:

```c
age
student_name
_marks
roll123
```

Invalid Examples:

```c
2age
total@
for
```

---

## 3. Data Types

Data types specify the type of data a variable can store.

### Common Data Types

* int : Stores integers
* float : Stores decimal numbers
* double : Stores large decimal values
* char : Stores a single character

Example:

```c
int age = 20;
float pi = 3.14;
char grade = 'A';
```

---

## 4. sizeof() Operator

The sizeof() operator returns the memory size of a data type or variable in bytes.

### Uses

* Check memory usage
* Understand data storage
* Useful in system programming

Example:

```c
sizeof(int);
sizeof(char);
sizeof(float);
```

---

## 5. Comments

Comments are used to explain code and improve readability.

### Types of Comments

Single Line Comment:

```c
// This is a comment
```

Multi-line Comment:

```c
/*
This is a
multi-line comment
*/
```

---

## 6. Input and Output

Input allows users to enter data, while output displays data on the screen.

### Functions Used

* scanf() : Takes input from the user
* printf() : Displays output

Example:

```c
int age;
scanf("%d", &age);
printf("%d", age);
```

---

## 7. Escape Sequences

Escape sequences are special characters used inside strings.

### Common Escape Sequences

* \n : New Line
* \t : Tab Space
* \ : Backslash
* " : Double Quote
* ' : Single Quote

Example:

```c
printf("Hello\nWorld");
printf("Name\tSuraj");
```

Output:

Hello
World

Name    Suraj
