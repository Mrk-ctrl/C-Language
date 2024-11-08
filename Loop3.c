#include <stdio.h>

int main()
{

    int num, i = 1, sum = 0;
    printf("Enter any Number: ");
    scanf("%d", &num);

    do
    {
        sum = sum + i;
        i++;
    } while (i <= num);
    printf("The sum is: %d\n", sum);

    return 0;
}