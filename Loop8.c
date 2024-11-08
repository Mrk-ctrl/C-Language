#include <stdio.h>

int main(){

    int num, fact = 1;
    printf("Enter any Number: ");
    scanf("%d", &num);

    do
    {
        fact = fact * num;
        num--;
    } while (num != 0);

    printf("The factorial is: %d\n", fact);
    

    return 0;
}