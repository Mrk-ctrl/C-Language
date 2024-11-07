#include <stdio.h>

int main()
{

    int arr[] = {3, 45, 573, 254, 8632, 4567, 89, 0, 54, 361, 345, 6748, 56789, 54, 568, 37234, 5678, 5, 78054, 325, 672, 345, 67846, 5879, 56, 7980, 4932, 5467, 3546};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted Array\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}