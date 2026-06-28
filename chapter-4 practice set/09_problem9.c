#include <stdio.h>

int main() {
    //8! = 1x2x3x4x5x6x7x8
    //5! = 1x2x3x4x5
    //n! = 1x2x3x4x5x6x7x8x...xn
    //0! = 1
    int i = 1;
    int product = 1;
    int n = 9;
    while(i<=n){
        product *=i;
        i++;
    }
    printf("The factorial of %d is : %d\n",n,product);
    return 0;
}