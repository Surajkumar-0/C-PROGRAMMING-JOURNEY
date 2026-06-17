#include <stdio.h>

int main() {
    int a = 10, b = 3;
    
    printf("Addition: %d\n", a + b);        // 13
    printf("Subtraction: %d\n", a - b);     // 7
    printf("Multiplication: %d\n", a * b);  // 30
    printf("Division: %d\n", a / b);        // 3
    printf("Modulus: %d\n", a % b);         // 1
    
    return 0;
}

#include <stdio.h>
#include <math.h>  // pow() function ke liye

int main() {
    int a = 5, b = 2;
    int z;
    double powerResult;

    // 1. Arithmetic operators
    printf("Addition: %d + %d = %d\n", a, b, a + b);        // 7
    printf("Subtraction: %d - %d = %d\n", a, b, a - b);     // 3
    printf("Multiplication: %d * %d = %d\n", a, b, a * b);  // 10
    printf("Division: %d / %d = %d\n", a, b, a / b);        // 2
    printf("Modulus: %d %% %d = %d\n", a, b, a % b);        // 1
    // Note: % cannot be used with float

    // 2. Assignment rules
    z = a * b;   // ✅ Legal
    // a * b = z; // ❌ Illegal, left side must be a variable
    printf("z = a * b = %d\n", z);

    // 3. No operator assumed
    // int i = ab; // ❌ Invalid
    int i = a * b; // ✅ Valid
    printf("i = a * b = %d\n", i);

    // 4. Exponentiation using pow()
    powerResult = pow(a, b); // a^b = 5^2 = 25
    printf("%d raised to %d = %.0f\n", a, b, powerResult);

    // 5. Modulus sign rule
    printf("-5 %% 2 = %d\n", -5 % 2);  // -1 (sign same as numerator)

    return 0;
}
