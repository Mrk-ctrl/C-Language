#include <stdio.h>

int main()
{

    int arr[] = {56, 7, 7, 9, 435, 6134, 56, 7567, 89, 6854, 673, 4, 567, 6890, 65, 763, 423, 567, 456, 785, 6798, 545, 672, 34, 5674, 56, 95, 6789, 5, 94356, 132, 4567, 68, 90, 65645, 72, 345, 673, 234, 56, 7534, 68};
    int len = sizeof(arr) / sizeof(arr[0]);
    int min, max;
    min = max = arr[0];

    for (int i = 1; i < len; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i]; 
        }
        
        if (arr[i] > max)
        {
            max = arr[i]; 
        }
        
    }

    printf("The minimum element in array is: %d\n", min);
    printf("The maximum element in array is: %d\n", max);
    

    return 0;
}