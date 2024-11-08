#include <stdio.h>

int main()
{

    int flag = 0;
    for (int i = 1; i <= 500; i++)
    {
        flag = 0;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag)
        {
            printf("%d is Composite\n", i);
        }
        else
        {
            printf("%d is Prime\n", i);
        }
    }

    return 0;
}