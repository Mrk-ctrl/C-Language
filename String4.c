#include <stdio.h>
#include <string.h>

int main(){

    char str1[5] = "Hel", str2[50] = "lo";
    // strcat(str1, str2);
    strncat(str1, str2, sizeof(str1) - strlen(str1) - 1);
    printf("%s", str1);

    return 0;
}