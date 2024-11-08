#include <stdio.h>

int main(){

    int num, rem = 0, result = 0, q;
    printf("Ente any Number: ");
    scanf("%d", &num);

    q = num;

    while (num != 0) // 0
    {
        rem = num % 10; // 
        result = result * 10 + rem; // 4321
        num = num / 10;
    }

    if (result == q)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }
    
    

    return 0;
}