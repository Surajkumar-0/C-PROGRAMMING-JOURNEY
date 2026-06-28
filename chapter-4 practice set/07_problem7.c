#include <stdio.h>

int main() {
    int sum = 0;

    for(int i = 1; i <= 10; i++) {
        sum += (2 * i);   // हर बार 8 × i को sum में जोड़ना
    }

    printf("The sum of numbers in the multiplication table of 2 is: %d\n", sum);
    return 0;
}
