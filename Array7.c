#include <stdio.h>

int main()
{

    int arr[] = {45, 67, 476, 834, 567, 8435, 6789, 5, 8, 34, 3546, 7854, 67487, 6948, 65879, 4834, 4576, 8745, 678, 76, 890, 946, 572, 45, 678, 35, 6789, 578, 909, 435, 6768, 234, 65768, 3724, 5678};
    int len = sizeof(arr) / sizeof(arr[0]);

    for (int i = len - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    

    return 0;
}