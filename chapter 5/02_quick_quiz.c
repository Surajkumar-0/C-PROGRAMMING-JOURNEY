#include <stdio.h>

// Function declarations (prototypes)
void good_morning();
void good_afternoon();
void good_evening();

// Function definitions
void good_morning()
{
    printf("Good Morning!\n");
}

void good_afternoon()
{
    printf("Good Afternoon!\n");
}

void good_evening()
{
    printf("Good Evening!\n");
}

int main()
{
    // Function calls
    good_morning();
    good_afternoon();
    good_evening();

    return 0;
}
