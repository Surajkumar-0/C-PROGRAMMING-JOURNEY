#include <stdio.h>

int main() {
    /*
    //while loop:

    int n, i = 2, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("%d is not a prime number.\n", n);
        return 0;
    }

    while (i <= n / 2) {
        if (n % i == 0) {
            count = 1;
            break;
        }
        i++;
    }

    if (count == 0)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);
    */

    //do-while loop:
    int n, i = 2, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("%d is not a prime number.\n", n);
        return 0;
    }

    do {
        if (n % i == 0) {
            count = 1;
            break;
        }
        i++;
    } while (i <= n / 2);

    if (count == 0)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);

    return 0;
}
