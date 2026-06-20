#include <stdio.h>

int main()
{
    int age = 45;

    if (age > 60)
    {
        printf("you can drive and you are a senior cetizen !\n");
    }
    else if(age>40){
        printf("you can drive and you are a elder");
    }
    else
    {
        printf("you can not drive \n");
    }

    return 0;
}