#include <stdio.h>

int main(){

    float fernite;
    printf("Enter the temprature in Fernite: ");
    scanf("%f", &fernite);

    printf("The temprature in Centigrade Degress is: %.2f\n", (fernite - 32) * 5 / 9);

    return 0;
}