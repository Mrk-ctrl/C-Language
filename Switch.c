#include <stdio.h>

int main(){

    int age;
    printf("Enter Your age: ");
    scanf("%d", &age);

    switch(age){
    case 18:
        printf("You can Drive\n");
        break;

    case 20:
        printf("Don't drink and drive\n");
        break;

    case 50:
        printf("Drive Carefully\n");
        break;

    default:
        printf("No case found\n");
        break;
    }

    return 0;
}