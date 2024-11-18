#include <stdio.h>

void MinMax(int arr[], int len, int *min, int *max, int *secmin, int *secmax){
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
    
    *secmin = *max;
    *secmax = 0;
    
    for (int i = 0; i < len; i++)
    {
        if (arr[i] != *min) 
        {
            if (arr[i] < *secmin) 
            {
                *secmin = arr[i]; // 4
            }
            
        }
        
        if (arr[i] != *max)
        {
            if (arr[i] > *secmax)
            {
                *secmax = arr[i]; // 45
            }
            
        }
        
    }
    
    
}

int main()
{

    int arr[] = {45, 54, 76, 3, 547, 63, 5467, 3234, 56, 789, 4, 67, 234, 567, 34, 5678, 37, 56789, 3234, 56, 7546, 789, 8567, 90, 943, 562132, 45, 673, 56, 784, 375};
    int len = sizeof(arr) / sizeof(arr[0]);
    int min, max, secmin, secmax;
    MinMax(arr, len, &min, &max, &secmin, &secmax);

    printf("The Minimum number in array is: %d\n", min);
    printf("The Second Minimum number in array is: %d\n", secmin);
    printf("The Maximum number in array is: %d\n", max);
    printf("The Second Maximum number in array is: %d\n", secmax);

    return 0;
}