#include <stdio.h>

void fun(int a, int b){
    a = 1;
    b = 5;
}

int main(){

    int a = 20, b = 10;

    fun(a, b);

    printf("The value of a is: %d\n", a);
    printf("The value of b is: %d\n", b);

    return 0;
}