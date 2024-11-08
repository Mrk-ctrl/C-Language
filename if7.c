#include <stdio.h>

int main(){

    char ch;
    printf("Enter any Character: ");
    scanf("%c", &ch);

    if (ch >= 65 && ch <= 90)
    {
        printf("Uppercase Letter\n");
    }
    else if (ch >= 97 && ch <= 122)
    {
        printf("Lowercase Letter\n");
    }
    else if (ch >= 48 && ch <= 57)
    {
        printf("Digit\n");
    }
    else
    {
        printf("Special Character\n");
    }
    

    return 0;
}