#include <stdio.h>   // Header file

int main() {
    // ✅ Valid variable names
    int age = 20;
    float total_marks = 95.5;
    char firstLetter = 'S';
    int roll123 = 101;
    int _count = 5;

    // ❌ Invalid variable names (ERROR देंगे अगर uncomment किया)
    // int 2sum = 10;     // digit से शुरू नहीं हो सकता
    // float total@ = 90; // special character allow नहीं है
    // int for = 5;       // keyword use नहीं कर सकते

    // Output
    printf("Age = %d\n", age);
    printf("Total Marks = %.2f\n", total_marks);
    printf("First Letter = %c\n", firstLetter);
    printf("Roll Number = %d\n", roll123);
    printf("Count = %d\n", _count);

    return 0;
}
