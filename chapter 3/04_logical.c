#include <stdio.h>

int main() {
    int  a = 1; int  b = 0;
    printf("The value of a and b is %d\n", a&&b);
    printf("The value of a and b is %d\n", a||b);
    printf("The value of not(a) is %d\n", !a);

    if (a && b){
        printf("both are true \n");
    }
    // is same is writing.....
    if(a){
        if(b){
            printf("both are true");
        }
    }
    return 0;
}