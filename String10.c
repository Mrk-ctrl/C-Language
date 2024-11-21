#include <stdio.h>
#include <string.h>
#define Max_size 50

int main(){

    char str[Max_size], copy_str[Max_size];
    printf("Enter the string: ");
    fgets(str, Max_size, stdin);
    str[strcspn(str, "\n")] = '\0';
    int len = strlen(str);

    for (int i = 0; i < len; i++) 
    {
        copy_str[i] = str[i];
    }

    copy_str[len] = '\0';

    printf("Copy string: %s\n", copy_str);
    

    return 0;
}