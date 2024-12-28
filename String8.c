#include <stdio.h>
#include <string.h>

int main(){

    char str[] = "THE PRIME STEP.com";

    printf("%s\n",strchr(str, 'P'));
    printf("%s\n", strrchr(str, 'P'));
    printf("%s\n", strstr(str, "PRIME"));

    return 0;
}