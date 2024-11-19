#include <stdio.h>

void fun(int *a, int *b){
    *a = 5;
    *b = 1;
}

int main(){

    int a = 20, b = 10;
    printf("Before Calling Function\n");
    printf("The value of a is: %d\n", a);
    printf("The value of b is: %d\n", b);

    printf("==========================\n");

    fun(&a, &b);

    printf("After Calling Function\n");
    printf("The value of a is: %d\n", a);
    printf("The value of b is: %d\n", b);

    return 0;
}