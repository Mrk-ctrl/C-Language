#include <stdio.h>

int main(){

    char ch;
    printf("Enter any Character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("Uppercase Letter\n");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("Lowercase Letter\n");
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("Digit\n");
    }
    else
    {
        printf("Special Character\n");
    }
    
    

    return 0;
}