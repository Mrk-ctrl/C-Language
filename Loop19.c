#include <stdio.h>

int main()
{

    for (int i = 1; i <= 500; i++)
    {
        int rem = 0, result = 0, q;

        q = i;

        while (q != 0) 
        {
            rem = q % 10;            
            result = result * 10 + rem; 
            q = q / 10;
        }

        if (result == i)
        {
            printf("%d is Palindrome\n", i);
        }
        else
        {
            printf("%d is Not Palindrome\n", i);
        }
    }

    return 0;
}