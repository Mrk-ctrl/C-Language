#include <stdio.h>
#include <string.h>
#define Max_size 50

int main(){

    char str[Max_size];
    printf("Enter the string: ");
    fgets(str, Max_size, stdin);
    str[strcspn(str, "\n")] = '\0';
    int len = 0;

    while (str[len] != '\0')
    {
        len++; 
    }
    
    printf("The length of string is: %d\n", len);


    return 0;
}