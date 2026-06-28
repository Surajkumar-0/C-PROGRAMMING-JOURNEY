#include <stdio.h>

int main()
{
    /*
    4. What can be done using one type of loop can also be done using the other two
    types of loops – true or false?
    */

    // ✅ Answer: True

    // Example:

    // for loop:-
    for (int i = 1; i <= 5; i++)
    {
        printf("%d\n", i);
    }
    // while loop:-
    int i = 1;
    while (i <= 5)
    {
        printf("%d\n", i);
        i++;
    }
    // do-while loop:-
    int i = 1;
    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= 5);

    // 👉 तीनों का output एक ही होगा:-
    // 1
    // 3
    // 2
    // 4
    // 5

    return 0;
}