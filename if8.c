#include <stdio.h>

int main(){

    int temp;
    printf("Enter the temprature: ");
    scanf("%d", &temp);

    if (temp < 0)
    {
        printf("Freezing Weather\n");
    }
    else if (temp >= 0 && temp < 10)
    {
        printf("Very Cold Weather\n");
    }
    else if (temp >= 10 && temp < 20)
    {
        printf("Cold Weather\n");
    }
    else if (temp >= 20 && temp < 30)
    {
        printf("Normal Weather\n");
    }
    else if (temp >= 30 && temp < 40)
    {
        printf("Hot Weather\n");
    }
    else
    {
        printf("Very Hot Weather\n");
    }


    return 0;
}