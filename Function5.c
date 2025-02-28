#include <stdio.h>

int reverse(){
    int num, rem = 0, result = 0;
    printf("Enter any Number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        rem = num % 10;
        result = result * 10 + rem;
        num = num / 10;
    }
    
    return result;
}

int check_palindrome(){
    int num = reverse();
    int rem = 0, result = 0, q;
    q = num;

    while (q != 0)
    {
        rem = q % 10;
        result = result * 10 + rem;
        q = q / 10;
    }

    if (result == num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
    
}

int main(){
    
    if (check_palindrome()) 
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }

    return 0;
}