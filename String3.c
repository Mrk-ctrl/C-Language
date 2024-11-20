#include <stdio.h>
#include <string.h>

int main(){

    char str1[5] = "He", str2[50] = "llo";
    strncat(str1, str2, sizeof(str1) - strlen(str1) - 1);
    printf("%s", str1);
    // char str1[50] = "Welcome To ", str2[50] = "THE PRIME STEP";
    // strcat(str1, str2);
    // printf("%s\n", str1);

    return 0;
}