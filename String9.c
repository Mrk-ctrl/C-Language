#include <stdio.h>
#include <string.h>
#define Max_size 50

int main(){

    char str[Max_size];
    printf("Enter the string: ");
    fgets(str, Max_size, stdin);
    str[strcspn(str, "\n")] = '\0';
    int len = strlen(str);
    int ucount = 0, lcount = 0, dcount = 0, scount = 0;

    for (int i = 0; i < len; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            ucount++;
        }
        else if (str[i] >= 'a' && str[i] <= 'z') 
        {
            lcount++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            dcount++;
        }
        else
        {
            scount++;
        }
        
    }

    printf("The number of uppercase letters in string is: %d\n", ucount);
    printf("The number of lowercase letters in string is: %d\n", lcount);
    printf("The number of special characters in string is: %d\n", scount);
    printf("The number of digits in string is: %d\n", dcount);
    

    return 0;
}