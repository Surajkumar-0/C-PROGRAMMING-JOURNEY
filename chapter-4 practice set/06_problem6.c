#include <stdio.h>

int main()
{
    // USING DO WHILE LOOP:

    // int i = 1;
    // int sum = 0;
    // do
    // {
    //     sum += i;
    //     i++;
    // } while (i <= 10);
    // printf("The sum of first 10 natural number is : %d\n", sum);

    // USING FOR LOOP:
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum +=i;
    }
    
    printf("The sum of first 10 natural number is : %d\n", sum);

    return 0;
}