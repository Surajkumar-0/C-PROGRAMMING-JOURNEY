# C-PROGRAMMING-JOURNEY
My C programming learning journey, including notes, examples, and practice programs from basic to advanced concepts.

## Chapter 1. First C Program

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


# Chapter 1 Practice Set

This section contains practice problems based on Chapter 1 concepts of C Programming.

## Problems Covered

### 1. Area of Rectangle
- Input length and breadth from the user
- Calculate area using:
  Area = Length × Breadth

### 2. Area of Circle and Volume of Cylinder
- Calculate area of circle
- Calculate volume of cylinder
- Use mathematical formulas:
  Area = πr²
  Volume = πr²h

### 3. Celsius to Fahrenheit Conversion
- Take temperature in Celsius
- Convert into Fahrenheit
- Formula:
  Fahrenheit = (Celsius × 9/5) + 32

### 4. Simple Interest Calculator
- Take Principal, Rate, and Time as input
- Calculate Simple Interest
- Formula:
  SI = (P × R × T) / 100


# Chapter 2: Operators, Type Conversion and Associativity in C

This chapter covers arithmetic operators, type conversion, type casting, operator precedence, and associativity in C programming.

---

# 1. Arithmetic Operators

Arithmetic operators are used to perform mathematical calculations.

| Operator | Meaning |
|----------|---------|
| + | Addition |
| - | Subtraction |
| * | Multiplication |
| / | Division |
| % | Modulus (Remainder) |

### Example

```c
int a = 10;
int b = 3;

printf("%d\n", a + b); // 13
printf("%d\n", a - b); // 7
printf("%d\n", a * b); // 30
printf("%d\n", a / b); // 3
printf("%d\n", a % b); // 1
```

---

# 2. Modulus Operator (%)

The modulus operator returns the remainder after division.

### Example

```c
10 % 3 = 1
15 % 4 = 3
20 % 5 = 0
```

### Important Note

```c
5 % 2 = 1
-5 % 2 = -1
```

The sign of the result follows the numerator.

---

# 3. Assignment Operator (=)

Used to assign values to variables.

### Example

```c
int a = 10;
int b = a;
```

Valid:

```c
a = b;
```

Invalid:

```c
5 = a;
```

The left side must be a variable.

---

# 4. Type Conversion

Type conversion means converting one data type into another.

It can happen automatically by the compiler.

### Example

```c
float a = 9.0;
int b = 2;

float c = a / b;
```

Output:

```text
4.500000
```

---

# 5. Type Casting

Type casting is done manually by the programmer.

### Syntax

```c
(type)value
```

### Example

```c
int a = 5;
int b = 2;

float result = (float)a / b;
```

Output:

```text
2.5
```

Without casting:

```c
a / b = 2
```

With casting:

```c
(float)a / b = 2.5
```

---

# 6. Power Function

The pow() function is used to calculate powers.

### Header File

```c
#include <math.h>
```

### Example

```c
pow(5, 2);
```

Output:

```text
25
```

---

# 7. Operator Precedence

Operator precedence decides which operator executes first.

### Common Precedence

| Priority | Operators |
|-----------|-----------|
| Highest | () |
| Next | *, /, % |
| Lowest | +, - |

### Example

```c
3 + 4 * 2
```

Output:

```text
11
```

Because multiplication executes first.

```c
3 + (4 * 2)
= 11
```

---

# 8. Associativity

Associativity decides the order of execution when operators have the same precedence.

### Left to Right Associativity

```c
20 / 5 * 2
```

Execution:

```c
20 / 5 = 4
4 * 2 = 8
```

Output:

```text
8
```

---

# 9. Expression Evaluation Example

```c
3 * b / 2 * c + 7 * a
```

Given:

```c
a = 3
b = 6
c = 9
```

Evaluation:

```text
3*6 = 18
18/2 = 9
9*9 = 81
7*3 = 21

81 + 21 = 102
```

Output:

```text
102
```

---

# Key Takeaways

- Arithmetic operators perform calculations.
- % returns remainder.
- Assignment operator stores values.
- Type conversion happens automatically.
- Type casting is done manually.
- pow() calculates powers.
- Precedence decides which operator runs first.
- Associativity decides execution order when precedence is same.

---

# Learning Outcome

After completing this chapter, I can:

- Use arithmetic operators.
- Understand modulus and division.
- Perform type conversion and type casting.
- Use the pow() function.
- Evaluate complex expressions.
- Understand operator precedence and associativity.
