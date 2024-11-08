#include <stdio.h>

int main(){

    int age;
    char gender;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your gender: ");
    scanf(" %c", &gender);

    if (gender == 'f' && age >= 18 && age <= 25)
    {
        printf("You are eligible for Women's Scholarship\n");
    }
    else if (gender == 'm')
    {
        printf("You are not eligible for Women's Scholarship\n");
    }
    else
    {
        printf("You are not eligible for any Scholarship\n");
    }
    
    

    return 0;
}