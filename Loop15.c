#include <stdio.h>

int main()
{

    int num, flag = 0;
    printf("Enter any Number: ");
    scanf("%d", &num);

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag)
    {
        printf("%d is Composite\n", num);
    }
    else
    {
        printf("%d is Prime\n", num);
    }

    return 0;
}