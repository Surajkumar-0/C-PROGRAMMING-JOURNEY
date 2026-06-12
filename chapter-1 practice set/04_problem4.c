#include <stdio.h>

int main() {
    float principal, rate, time, simpleInterest;

    // Taking input
    printf("Enter Principal amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest: ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    // Formula for Simple Interest
    simpleInterest = (principal * rate * time) / 100;

    // Display result
    printf("Simple Interest = %.2f\n", simpleInterest);

    return 0;
}
