#include <stdio.h>

int main(){

    int a = 10;
    printf("Post Increment\n");
    printf("The value of a while Post Increment is: %d %d\n", a++, a); // 11

    printf("=======================\n");

    printf("Pre Increment\n");
    printf("The value of a while Pre Increment is: %d\n", ++a); // 12
    printf("=======================\n");

    printf("Post Decrement\n");
    printf("The value of a while Post Decrement is: %d %d\n", a--, a); // 11

    printf("=======================\n");

    printf("Pre Decrement\n");
    printf("The value of a while Pre Decrement is: %d\n", --a); // 10

    


    return 0;
}