#include <stdio.h>

int main()
{

    // int arr[] = {23, 6, 84, 568, 3, 5672, 54, 6786, 89, 5, 6784, 5, 673, 45, 674, 5678, 45, 10, 864, 5, 6783, 1, 4, 5678, 4657, 8943, 4, 562, 345, 678, 67, 95, 456, 734, 567, 3, 5476, 834, 56, 783, 34};
    int arr[] = {5, 33, 56, 3, 6, 34, 10, 5};
    int len = sizeof(arr) / sizeof(arr[0]);
    int target = 1, flag = 0;
    int *ptr = &arr[0], *qtr = &arr[1];

    for (int i = 0; i < len; i++)
    {
        if (i > 0)
        {
            ptr++;
        }
        
        for (int j = i + 1; j < len - i; j++)
        {
            if (*ptr + *qtr == target)
            {
                flag = 1;
                printf("%d and %d ads up to %d\n",*ptr, *qtr, target);
                break;
            }
            else{
                qtr++;
            }
        }
        if (flag)
        {
            break;
        }
        qtr = &arr[i + 1];
    }

    if (flag == 0)
    {
        printf("No numbers found\n");
    }
    
    

    return 0;
}