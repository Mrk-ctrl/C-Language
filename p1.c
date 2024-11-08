#include <stdio.h>

int main(){

    float km;
    printf("Enter the distance in km: ");
    scanf("%f", &km);

    printf("The Distance in Meters is: %.2f\n", 1000 * km);
    printf("The Distance in CentiMeters is: %.2f\n", 100000 * km);
    printf("The Distance in Feets is: %.2f\n", 3280.84 * km);
    printf("The Distance in Inches is: %.2f\n", 39370.1 * km);

    return 0;
}