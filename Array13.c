#include <stdio.h>

int main()
{

    int arr[] = {54, 6, 567, 324, 56789, 843, 234, 5456, 7, 689, 7632, 4356, 7857, 678976, 5234, 5678, 47362, 435, 6758};
    int len = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < len; i++)
    {
        int flag = 0;

        for (int j = 2; j < arr[i]; j++)
        {
            if (arr[i] % j == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag)
        {
            printf("%d is composite\n", arr[i]);
        }
        else
        {
            printf("%d is prime\n", arr[i]);
        }
    }

    return 0;
}