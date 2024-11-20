#include <stdio.h>
#include <string.h>

int main(){

    char str1[] = "THE PRIME STEP";
    char str2[] = "THE PRIME STEP.com";

    if (strncmp(str1, str2, 5) == 0)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }
    

    return 0;
}