#include <stdio.h>
#include <string.h>

int main(){

    /*
    1.  All uppercase letters are smaller then lowercase letters
    2.  All digits are smaller then uppercase and lowercase
    3.  White space is smaller then all uppercase lowercase and digits

    4.  If str1 is greater then str2 returns positive value (1)
    5.  If str1 is equal to str2 returns zero (0)
    6.  If str1 is smaller then str2 returns negativ value (-1)
    */

    char *str1 = "abcd";
    char *str2 = "abcd";

    if (strcmp(str1, str2) < 0)
    {
        printf("string is smaller then string 2");
    }
    else
    {
        printf("string is greater or equal to string 2");
    }
    

    return 0;
}