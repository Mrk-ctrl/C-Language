#include <stdio.h>

int main()
{

    // int a[] = {1, 2, 3, 4, 5};
    // int arr[5] = {1, 2, 3, 4, 5};
    // int arr1[5];
    // arr1[0] = 1;
    // arr1[1] = 2;
    // arr1[2] = 3;
    // arr1[3] = 4;
    // arr1[4] = 5;

    // printf("%d\n", arr[0]);
    // printf("%d\n", arr[1]);
    // printf("%d\n", arr[2]);
    // printf("%d\n", arr[3]);
    // printf("%d\n", arr[4]);

    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d ", arr[i]);
    // }

    // int arr[15] = {1, 2, 3, 4, 5, 6};

    // for (int i = 0; i < 15; i++)
    // {
    //     printf("%d ", arr[i]);
    // }

    // int arr[10] = {0};

    // int arr[10] = {12, 0, 0, 0, 67, 0, 0, 0, 0, 7899};
    // int arr[10] = {[0] = 67, [4] = 90, [9] = 10};

    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d ", arr[i]);
    // }

    int arr[] = {45, 64, 784, 780, 5943, 245, 67896, 5475, 67890, 86, 9, 7654, 35, 7684, 657, 905, 7678, 906, 856789, 60, 578, 906, 543, 5678, 954, 345, 67854, 657, 906, 95789, 7, 67, 858, 76537, 485960, 597409, 59435, 678, 2743, 5678, 65, 7890, 76, 90, 76859, 45, 678, 3234, 56787, 46, 789, 46, 789, 483234, 6573, 54, 6789, 46, 78695, 467, 8983, 74658, 9483, 4687, 9483, 467, 83726, 12435, 65, 78790, 8790, 7065, 78, 32, 34576, 323, 457, 23, 45678, 35, 6789, 9, 0, 876, 545, 6732, 435, 743, 254, 6879, 4865, 7895, 43};

    // printf("%d",sizeof(arr) / sizeof(arr[0]));

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        printf("%d ", arr[i]);
    }
    

    return 0;
}