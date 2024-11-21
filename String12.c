#include <stdio.h>
#include <string.h>
#define Max_size 50

int main(){

    char str[Max_size], reverse_str[Max_size];
    printf("Enter the string: ");
    fgets(str, Max_size, stdin);
    str[strcspn(str, "\n")] = '\0';
    int len = strlen(str), end;
    end = len - 1;

    for (int i = 0; i < len; i++)
    {
        reverse_str[end] = str[i];
        end--;
    }
    
    reverse_str[len] = '\0';
    int flag = 0;
    // if (strcmp(reverse_str, str) == 0)
    // {
    //     printf("Palindrome");
    // }
    // else
    // {
    //     printf("Not Palindrome\n");
    // }

    for (int i = 0; i < len; i++)
    {
        if (reverse_str[i] != str[i])
        {
            flag = 1;
            break;
        }
        
    }
    
    if (flag)
    {
        printf("Not Palindrome\n");
    }
    else
    {
        printf("Palindrome\n");
    }
    
    
    

    return 0;
}