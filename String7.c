#include <stdio.h>
#include <string.h>

int main(){

    char str1[] = "THE PRIME STEP";
    printf("%s\n", strchr(str1, 'E'));
    printf("%s\n", strrchr(str1, 'E'));
    printf("%s\n", strstr(str1, "PRIME"));

    return 0;
}