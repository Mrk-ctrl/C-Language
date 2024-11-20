#include <stdio.h>
#include <string.h>
#define Max_size 50

int main(){

    char my_str[Max_size];
    printf("Enter the string: ");
    fgets(my_str, Max_size, stdin);
    my_str[strcspn(my_str, "\n")] = '\0';

    int count = 0;

    while (my_str[count] != '\0') 
    {
        count++; 
    }
    
    printf("The length of string is: %d\n", count);

    return 0;
}