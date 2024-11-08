#include <stdio.h>

// return_type function_name(parameter1, parameter2)

void sum(int a, int b){
    printf("The sum is: %d\n", a + b);
}

int main(){

    sum(20, 10);
    sum(67, 45);
    sum(89, 12);
    sum(78, 3);
    
    return 0;
}