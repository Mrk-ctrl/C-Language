#include <stdio.h>
#include <string.h>

int main(){

    /*
    1. All Uppercase letters are smaller then lowercase letter
    2. All Digits are smaller then both uppercase and lowercase
    3. White space is smaller then all uppercase lowercase and digits 

    4. If string 1 is greater then string 2 returns positive value(1)       
    5. If string 1 is equal to string 2 returns 0
    6. If string 1 is smaller then string 2 returns negative value (-1)
    */

    char *str1 = "abcd";
    char *str2 = "abcd";

    if (strcmp(str1, str2) > 0)
    {
        printf("String 1 is greater then string 2");
    }
    else
    {
        printf("String 1 is smaller or equal to string 2");
    }
    
    

    return 0;
}