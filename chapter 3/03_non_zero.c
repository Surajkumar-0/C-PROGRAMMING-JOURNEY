#include <stdio.h>

int main() {
    if (1){
        printf("This if is execuated !\n");
    }
    if (2345){
        printf("This if is also execuated !\n");
    }
    if (2.45){
        printf("This if is also execuated !\n");
    }
    if ('c'){
        printf("This if is also execuated !\n");
    }
    if (0){
        printf("I am zero I am not execuated!\n");
    }
    
    
    return 0;
}