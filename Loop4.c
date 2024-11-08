#include <stdio.h>

int main(){

    int num, i = 1;
    printf("Enter any Number: ");
    scanf("%d", &num);

    do
    {
        if (i % 2 == 0)
        {
            printf("%d is even\n", i);
        }
        else
        {
            printf("%d is odd\n", i);
        }
        i++; 
        
    } while (i <= num);
    

    return 0;
}