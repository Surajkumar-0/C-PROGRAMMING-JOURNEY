#include <stdio.h>

int main() {
    float r = 6;
    float height = 10;

    printf("The area of the circle with radius %.2f is %.2f\n", r, 3.14*r*r);
    printf("The volume of cylinder with radius %.2f and height %.2f is %.2f", r, height, 3.14*r*r*height);

    return 0;
}
