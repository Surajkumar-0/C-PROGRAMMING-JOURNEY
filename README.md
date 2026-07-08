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

# Chapter 2 Practice Set

This practice set contains problems based on arithmetic operators, type conversion, type casting, operator precedence, and associativity in C.

---

## Problem 1: Invalid Variable Declaration

### Objective
Identify the invalid declaration in C.

### Concepts Used
- Variable declaration
- Character constants
- Data types

### Learning
A character variable can store only a single character enclosed in single quotes.

---

## Problem 2: Expression Evaluation

### Objective
Evaluate the expression:

```c
3.0 / 8 - 2
```

### Concepts Used
- Floating point arithmetic
- Division operator
- Operator precedence

### Learning
When a floating-point value is involved, the result is calculated as a floating-point number.

---

## Problem 3: Modulus Operator

### Objective
Find the remainder using:

```c
3349895 % 97
```

### Concepts Used
- Modulus operator (%)
- Integer arithmetic

### Learning
The modulus operator returns the remainder after division.

---

## Problem 4: Operator Precedence and Associativity

### Objective
Evaluate:

```c
3*x/y - z + k
```

### Given Values

```c
x = 2
y = 3
z = 3
k = 1
```

### Concepts Used
- Arithmetic operators
- Operator precedence
- Associativity

### Learning
Multiplication and division are performed before addition and subtraction.

---

## Problem 5: Type Conversion

### Objective
Add an integer and a floating-point value.

```c
int a = 1;
float b = 3.0;
```

### Concepts Used
- Implicit type conversion
- Mixed data type operations

### Learning
During arithmetic operations, the integer value is automatically converted to float.

---

## Key Concepts Practiced

- Variable Declaration
- Arithmetic Operators
- Modulus Operator
- Expression Evaluation
- Operator Precedence
- Associativity
- Type Conversion
- Floating Point Arithmetic

---

## Learning Outcome

After completing this practice set, I can:

- Solve operator-based problems.
- Understand precedence and associativity.
- Use modulus operations correctly.
- Predict expression outputs.
- Apply type conversion concepts.
- Improve logical thinking in C programming.


# Chapter 3 - Conditional Instructions

This chapter covers decision-making statements in C. Conditional statements allow a program to execute different blocks of code based on specific conditions.

---

## Topics Covered

### 1. if Statement
- Executes a block of code when a condition is true.
- Basic decision-making structure.

### 2. if-else Statement
- Executes one block when the condition is true.
- Executes another block when the condition is false.

### 3. Non-Zero Conditions
- Any non-zero value is treated as TRUE.
- Zero is treated as FALSE.

Examples:
```c
if(1)
if(100)
if('A')
if(2.5)
```

---

### 4. Logical Operators

#### AND (&&)
Returns true when both conditions are true.

#### OR (||)
Returns true when at least one condition is true.

#### NOT (!)
Reverses the result of a condition.

---

### 5. else-if Ladder
Used to check multiple conditions sequentially.

Example:
```c
if(condition1)
{
}
else if(condition2)
{
}
else
{
}
```

---

### 6. Ternary Operator

Shortcut for simple if-else statements.

Syntax:

```c
condition ? expression1 : expression2;
```

Example:

```c
a > b ? printf("A is greater") : printf("B is greater");
```

---

### 7. switch-case

Used when multiple choices depend on a single variable.

Example:

```c
switch(choice)
{
    case 1:
        break;

    case 2:
        break;

    default:
        break;
}
```

---

### 8. Grade Calculator Project

Mini project using:

- if
- else-if ladder
- logical operators

Grades assigned according to marks range.

---

## Key Concepts Practiced

- Decision Making
- Conditional Statements
- if Statement
- if-else Statement
- else-if Ladder
- Nested Conditions
- Logical Operators
- Ternary Operator
- Switch Case
- Mini Project Development

---

## Learning Outcome

After completing this chapter, I can:

- Write conditional programs.
- Make decisions using if-else.
- Use logical operators effectively.
- Handle multiple conditions using else-if ladder.
- Use switch-case statements.
- Build simple real-world programs like Grade Calculators.


# Chapter 3 Practice Set - Conditional Instructions

This practice set focuses on applying conditional statements in C programming using if, if-else, else-if ladder, logical operators, and comparison operators.

---

## Problems Covered

### Problem 1: Assignment vs Equality Operator

Learned the difference between:

```c
if(a = 11)   // Assignment
if(a == 11)  // Comparison
```

---

### Problem 2: Pass or Fail Program

Conditions:

- Minimum 33% in each subject
- Overall percentage >= 40%

Concepts Used:

- if-else
- Logical OR (||)
- Arithmetic Operations

---

### Problem 3: Income Tax Calculator

Tax Slabs:

- Up to ₹2,50,000 → No Tax
- ₹2,50,001 – ₹5,00,000 → 5%
- ₹5,00,001 – ₹10,00,000 → 20%
- Above ₹10,00,000 → 30%

Concepts Used:

- else-if ladder
- Mathematical calculations

---

### Problem 4: Leap Year Checker

Leap Year Rules:

- Divisible by 400
OR
- Divisible by 4 but not by 100

Concepts Used:

- Logical AND (&&)
- Logical OR (||)

---

### Problem 5: Lowercase Character Check

ASCII Range:

- a → 97
- z → 122

Concepts Used:

- Character handling
- ASCII values
- Relational operators

---

### Problem 6: Greatest of Four Numbers

Find the largest number among four inputs.

Concepts Used:

- Comparison operators
- Conditional statements

---

## Concepts Practiced

- if statement
- if-else statement
- else-if ladder
- Logical operators
- Relational operators
- Character handling
- Nested decision making

---

## Learning Outcome

After completing this practice set, I can:

- Make decisions using conditional statements.
- Use logical operators effectively.
- Solve real-world decision-based problems.
- Work with characters and ASCII values.
- Build simple tax, grading, and comparison programs.


# Chapter 04 - Loops in C

This chapter introduces Loops in C Programming. Loops are used to execute a block of code repeatedly until a specified condition becomes false.

---

## Topics Covered

### 1. Introduction to Loops

Loops help avoid writing the same code multiple times.

Example:

```c
printf("Happy Birthday!\n");
```

Instead of writing the statement repeatedly, loops can be used.

---

### 2. While Loop

The while loop executes a block of code as long as the given condition remains true.

Syntax:

```c
while(condition)
{
    // code
}
```

Example:

```c
int i = 0;

while(i < 5)
{
    printf("%d\n", i);
    i++;
}
```

---

### 3. Counter Variable

A counter variable controls how many times a loop runs.

Example:

```c
int i = 0;

while(i < 10)
{
    printf("%d\n", i);
    i++;
}
```

---

### 4. Infinite Loop

An infinite loop never stops because its condition is always true.

Example:

```c
while(1)
{
    printf("Infinite Loop");
}
```

---

### 5. Increment and Decrement Operators

Used to increase or decrease variable values.

Increment:

```c
i++;
++i;
```

Decrement:

```c
i--;
--i;
```

Example:

```c
int i = 5;

i++;
i--;
```

---

### 6. Do While Loop

The do while loop executes the code at least once before checking the condition.

Syntax:

```c
do
{
    // code
}
while(condition);
```

Example:

```c
int i = 0;

do
{
    printf("%d\n", i);
    i++;
}
while(i < 5);
```

---

### 7. For Loop

A for loop is used when the number of iterations is known.

Syntax:

```c
for(initialization; condition; update)
{
    // code
}
```

Example:

```c
for(int i = 0; i < 5; i++)
{
    printf("%d\n", i);
}
```

---

### 8. Decrementing For Loop

A for loop can also run in reverse order.

Example:

```c
for(int i = 10; i > 0; i--)
{
    printf("%d\n", i);
}
```

---

### 9. Break Statement

The break statement immediately terminates a loop.

Example:

```c
for(int i = 0; i < 10; i++)
{
    if(i == 5)
    {
        break;
    }

    printf("%d\n", i);
}
```

---

### 10. Continue Statement

The continue statement skips the current iteration and moves to the next iteration.

Example:

```c
for(int i = 0; i < 10; i++)
{
    if(i == 5)
    {
        continue;
    }

    printf("%d\n", i);
}
```

---

## Key Concepts Practiced

* Introduction to Loops
* While Loop
* Counter Variables
* Infinite Loops
* Increment and Decrement Operators
* Do While Loop
* For Loop
* Decrementing For Loop
* Break Statement
* Continue Statement

---

## Learning Outcome

After completing this chapter, I can:

* Use loops to execute repetitive tasks.
* Work with while loops.
* Work with do while loops.
* Use for loops efficiently.
* Control loop execution using break and continue.
* Understand increment and decrement operators.
* Create programs with repetitive logic using loops.


# Chapter 4 Practice Set - Loops

This practice set focuses on solving loop-based problems in C programming using `for`, `while`, and `do-while` loops. It helps in understanding iteration, repetition, and mathematical problem-solving.

---

## Problems Covered

### Problem 1: Multiplication Table (Ascending)

Print the multiplication table of a given number from **1 to 10**.

Concepts Used:

- for loop
- User input
- Arithmetic operations

---

### Problem 2: Multiplication Table (Descending)

Print the multiplication table of a given number from **10 to 1**.

Concepts Used:

- for loop
- Reverse iteration
- Arithmetic operations

---

### Problem 3: Do-While Loop MCQ

Understand the behavior of the `do-while` loop.

Key Concept:

- A `do-while` loop executes **at least once**, even if the condition is false.

---

### Problem 4: Multiplication Table Using While Loop

Generate the multiplication table of a number using a `while` loop.

Concepts Used:

- while loop
- Loop control
- Increment operator

---

### Problem 5: Sum of First 10 Natural Numbers

Calculate the sum of the first ten natural numbers.

Concepts Used:

- while loop
- Accumulator variable
- Iteration

---

### Problem 6: Sum Using Different Loops

Solve the same problem using different looping techniques.

Concepts Used:

- for loop
- while loop
- do-while loop
- Loop comparison

---

### Problem 7: Sum of a Multiplication Table

Find the sum of all values in the multiplication table of a given number.

Concepts Used:

- for loop
- Arithmetic operations
- Accumulation

---

### Problem 8: Factorial Using For Loop

Calculate the factorial of a number using a `for` loop.

Concepts Used:

- for loop
- Multiplication
- Factorial logic

---

### Problem 9: Factorial Using While Loop

Calculate the factorial of a number using a `while` loop.

Concepts Used:

- while loop
- Factorial calculation
- Loop control

---

### Problem 10: Prime Number Check Using For Loop

Determine whether a given number is prime.

Concepts Used:

- for loop
- Conditional statements
- break statement

---

### Problem 11: Prime Number Check Using Do-While Loop

Check whether a number is prime using a `do-while` loop.

Concepts Used:

- do-while loop
- Conditional statements
- break statement

---

## Concepts Practiced

- for loop
- while loop
- do-while loop
- Nested logic
- Arithmetic operations
- Factorial
- Prime number checking
- Multiplication tables
- Loop comparison
- break statement

---

## Learning Outcome

After completing this practice set, I can:

- Solve problems using different types of loops.
- Generate multiplication tables efficiently.
- Calculate factorials using iterative methods.
- Find the sum of numbers using loops.
- Check whether a number is prime.
- Understand the differences between `for`, `while`, and `do-while` loops.
- Improve logical thinking through loop-based programming problems.


# Chapter 5 - Functions and Recursion

This chapter introduces **Functions** in C programming and explains how they help in writing modular, reusable, and organized code. It also covers **Recursion**, where a function calls itself to solve a problem.

---

## Programs Covered

### Program 1: Function Declaration, Definition and Call

Create a function to perform addition and call it multiple times.

Concepts Used:

- Function Prototype
- Function Definition
- Function Call
- Return Value

---

### Program 2: Multiple Functions

Create multiple functions to display different greeting messages.

Concepts Used:

- Multiple Functions
- Void Functions
- Function Calls
- Program Modularity

---

### Program 3: Call by Value

Understand how function arguments are passed by value.

Concepts Used:

- Call by Value
- Local Variables
- Parameter Passing
- Variable Scope

---

### Program 4: Using Library Functions

Use predefined functions from the C Standard Library.

Concepts Used:

- `<math.h>`
- `pow()` Function
- Header Files
- Library Functions

---

### Program 5: Recursion

Calculate the factorial of a number using recursion.

Concepts Used:

- Recursive Function
- Base Condition
- Recursive Call
- Stack Execution

---

## Concepts Practiced

- Function Prototype
- Function Definition
- Function Call
- Return Statement
- Void Functions
- Call by Value
- Local Variables
- Header Files
- Library Functions
- Recursion
- Base Case
- Recursive Problem Solving

---

## Learning Outcome

After completing this chapter, I can:

- Create and use user-defined functions.
- Understand the difference between declaration, definition, and function call.
- Pass arguments to functions using call by value.
- Use standard library functions like `pow()`.
- Write recursive functions with proper base conditions.
- Improve code readability through modular programming.
- Solve problems efficiently using functions and recursion.
