#include <stdio.h>
#include <string.h>

int main(){

    char str[] = "Hello";
    printf("%s\n", strupr(str));
    printf("%s\n", strlwr(str));
    printf("%s\n", strrev(str));

    return 0;
}