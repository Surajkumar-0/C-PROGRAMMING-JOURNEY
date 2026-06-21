#include <stdio.h>

int main()
{
    int a, b, c, d, greatest;

    // Input four numbers
    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    // Assume a is greatest initially
    greatest = a;

    if (b > greatest)
        greatest = b;

    if (c > greatest)
        greatest = c;

    if (d > greatest)
        greatest = d;

    printf("The greatest number is: %d\n", greatest);

    return 0;
}
