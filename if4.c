#include <stdio.h>

int main(){

    int num;
    printf("Enter any Number: ");
    scanf("%d", &num);

    if (num % 5 == 0)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not divisible by 5");
    }
    

    return 0;
}