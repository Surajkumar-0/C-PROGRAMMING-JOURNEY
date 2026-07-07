#include <stdio.h>

// ======================================================
// FUNCTION PROTOTYPE
// Compiler ko pehle hi bataya ja raha hai ki
// 'sum' naam ka function hai.
// Ye 2 integer values lega aur 1 integer return karega.
// Syntax:
// return_type function_name(parameters);
// ======================================================
int sum(int, int);


// ======================================================
// FUNCTION DEFINITION
// Yahan function ka actual kaam likha jata hai.
// x aur y me jo values aayengi unka sum return hoga.
// ======================================================
int sum(int x, int y)
{
    return x + y;
}


// ======================================================
// MAIN FUNCTION
// Program execution hamesha yahin se start hota hai.
// ======================================================
int main()
{
    // -------------------------
    // First Example
    // -------------------------
    int a = 1;
    int b = 2;

    // Function Call
    // sum(a, b)
    // x = 1
    // y = 2
    // return = 3
    int c = sum(a, b);

    printf("Sum = %d\n", c);


    // -------------------------
    // Second Example
    // -------------------------
    int a1 = 12;
    int b1 = 23;

    // sum(12, 23)
    // x = 12
    // y = 23
    // return = 35
    int c1 = sum(a1, b1);

    printf("Sum = %d\n", c1);


    // -------------------------
    // Third Example
    // -------------------------
    int a2 = 2;
    int b2 = 27;

    // sum(2, 27)
    // x = 2
    // y = 27
    // return = 29
    int c3 = sum(a2, b2);

    printf("Sum = %d\n", c3);

    return 0;
}
