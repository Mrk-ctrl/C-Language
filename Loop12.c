#include <stdio.h>

int main(){

    int num, rem = 0, result = 0;
    printf("Enter any Number: ");
    scanf("%d", &num);

    while (num != 0) 
    {
        rem = num % 10; 
        result = result * 10 + rem; 
        num = num / 10;
    }
    
    printf("The reversed number is: %d\n", result);


    return 0;
}