#include <stdio.h>

int main(){

    int a = 10;
    int *ptr = &a;
    int **pptr = &ptr;

    printf("Address of A\n");
    printf("The Address of a with ptr is: %zu\n", ptr);
    printf("The Address of a with pptr is: %zu\n", *pptr);
    printf("========================\n");

    printf("Value of A\n");
    printf("The value of a with ptr is: %d\n", *ptr);
    printf("The value of a with pptr is: %d\n", **pptr);

    return 0;
}