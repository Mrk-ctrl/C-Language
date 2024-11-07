#include <stdio.h>

int main()
{

    int arr[] = {34, 3874, 465, 794, 3234, 567, 45467, 896, 789, 543, 567, 3234, 567, 54, 6789, 576, 8795, 4342, 562, 34, 5678, 546, 789, 6567, 9, 543, 5672, 643, 4567, 354, 67890, 68, 96, 523, 4};
    int len = sizeof(arr) / sizeof(arr[0]);
    int num, flag = 0;
    printf("Enter any Number: ");
    scanf("%d", &num);

    for (int i = 0; i < len; i++)
    {
        if (arr[i] == num)
        {
            flag = 1;
            printf("%d is in the array\n", num);
            break;
        }    
    }

    if (!flag)
    {
        printf("%d is not in the array\n", num);
    }
    
    

    return 0;
}