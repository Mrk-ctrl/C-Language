#include <stdio.h>
#define z 'p' //! Macro by default constant 

int main(){

    {
    //! Demonstration of a local variable
        int n = 10;
        printf("The value of n is: %d\n", n);
    }

    int a = 10;
    float b = 5.6;
    char c = 'e';

    /*
    !   PlaceHolders - Format Specifiers
        %d - int
        %f - float
        %c - char

    !   Escape Sequence Character
        \n - New Line Character
    */

    a = 1;
    b = 6.7;
    c = 't';

    printf("The value of a is: %d\n", a);
    printf("%.2f\n", b);
    printf("%c\n", c);
    printf("The value of macro z is: %c\n", z);

    const int x = 90; //! Constant cannot be changed
    // x = 9;

    printf("The size of Integer is: %d\n", sizeof(int));
    printf("The size of Float is: %d\n", sizeof(float));
    printf("The size of Character is: %d\n", sizeof(char));

    return 0;
}