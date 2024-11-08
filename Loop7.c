#include <stdio.h>

int main(){

    int num, i = 1, fact = 1;
    printf("Enter any Number: ");
    scanf("%d", &num);

    do
    {
        fact = fact * i;
        i++;
    } while (i <= num);  

    printf("The Factorial is: %d\n", fact);
    

    return 0;
}