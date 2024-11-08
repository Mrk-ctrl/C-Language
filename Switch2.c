#include <stdio.h>

int main()
{

    int choice, a, b, c;
    printf("Choose from below option\n");
    printf("1 For Addition\n");
    printf("2 For Subtraction\n");
    printf("3 For Multiplication\n");
    printf("4 For Division\n");
    printf("==========================\n");

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("======================\n");

    printf("Enter Your choice: ");
    scanf("%d", &choice);
    printf("=======================\n");

    switch (choice)
    {
    case 1:
        c = a + b;
        printf("The Addition is: %d\n", c);
        break;

    case 2:
        c = a - b;
        printf("The Subtraction is: %d\n", c);
        break;

    case 3:
        c = a * b;
        printf("The Multiplication is: %d\n", c);
        break;

    case 4:
        c = a / b;
        printf("The Division is: %d\n", c);
        break;

    default:
        printf("Invalid Choice\n");
        break;
    }

    return 0;
}