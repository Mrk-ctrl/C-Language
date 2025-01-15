#include <stdio.h>

int main(){

    int age;
    char gender;

    printf("Enter Your age: ");
    scanf("%d", &age);

    printf("Enter Your gender[m/f]: ");
    scanf(" %c", &gender);

    if (gender == 'f' && age >= 18 && age <= 25)
    {
        printf("You are eligible for women's scholarship\n");
    }
    else if (gender == 'm')
    {
        printf("You are not eligible for women's scholarship\n");
    }
    else
    {
        printf("You are not eligible for any scholarship\n");
    }
    

    return 0;
}