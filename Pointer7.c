#include <stdio.h>

void MinMax(int arr[], int len, int *min, int *max){
    *min = *max = arr[0];

    for (int i = 1; i < len; i++)
    {
        if (arr[i] < *min)
        {
            *min = arr[i];
        }
        
        if (arr[i] > *max)
        {
            *max = arr[i];
        }
        
    }
    
}

int main()
{

    int arr[] = {45, 6, 354, 6873, 456, 783, 567, 832, 34, 5678, 95, 45636, 243, 567, 846, 7, 8437, 456, 783, 7244, 567, 234, 56, 73, 2345, 67, 364, 56, 73, 45, 67, 2456};
    int len = sizeof(arr) / sizeof(arr[0]);
    int min, max;

    MinMax(arr, len, &min, &max);

    printf("The minimum number in array is: %d\nThe Maximum number in array is: %d\n", min, max);

    return 0;
}