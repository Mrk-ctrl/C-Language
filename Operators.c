#include <stdio.h>

int main(){

    int a = 20, b = 10;

    /*
        Arithamatic Operators
        +
        -
        *
        / - Gives Quotient
        % - Gives Remainder
    */

    printf("Arithamatic Operators\n");
    printf("The Addition of %d and %d is: %d\n", a, b, a + b);
    printf("The subtraction of %d and %d is: %d\n", a, b, a - b);
    printf("The Multiplication of %d and %d is: %d\n", a, b, a * b);
    printf("The Division of %d and %d is: %d\n", a, b, a / b);
    printf("The Remainder of %d and %d is: %d\n", a, b, a % b);
    printf("==============================\n");

    /*
        Assingment Operators
        =
        +=
        -=
        *=
        /=
        %=
    */

    // a += 10; // 30
    // printf("The value of a is: %d\n", a);

    // a -= 10; // 20
    // printf("The value of a is: %d\n", a);

    // a *= 10; // 200
    // printf("The value of a is: %d\n", a);

    // a /= 10; // 20
    // printf("The value of a is: %d\n", a);

    // a %= 10; // 0
    // printf("The value of a is: %d\n", a);

    /*
        Relational Operators - Comparison Operators
        ==
        !=
        <
        >
        <=
        >=
        If condition is false returns 0
        If condition is true returns non-zero (1)
    */

    printf("Relational Operators - Comparison Operators\n");
    printf("The answer is: %d\n", a == b);
    printf("The answer is: %d\n", a != b);
    printf("The answer is: %d\n", a < b);
    printf("The answer is: %d\n", a > b);
    printf("The answer is: %d\n", a <= b);
    printf("The answer is: %d\n", a >= b);
    printf("==============================\n");

    /*
        Logical Operators
        &&
        ||
        !
    */

    printf("Logical Operators\n");
    printf("The answer is: %d\n", a > 10 && b < 5);
    printf("The answer is: %d\n", a > 10 || b < 5);
    printf("The answer is: %d\n", !(a == b));

    /*
        Ternary Operator
        ?
    */

    return 0;
}