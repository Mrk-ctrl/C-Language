#include <stdio.h>

int main(){

    int a, b;
    printf("Enter any two numbers: ");
    scanf("%d %d", &a, &b);

    if (a > b)
    {
        printf("%d is greater then %d\n", a, b);
    }
    else
    {
        printf("%d is greater then %d\n", b, a);
    }
    
    return 0;
}