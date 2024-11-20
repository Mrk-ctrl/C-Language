#include <stdio.h>
#include <string.h>

int main(){

    char str[100] = "Hello Good Morning";
    printf("%d %d", strlen(str), sizeof(str));

    return 0;
}