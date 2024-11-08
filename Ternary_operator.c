#include <stdio.h>

int main(){

    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    (age >= 18) ? printf("you can drive\n") : printf("You cannot drive\n");


    return 0;
}