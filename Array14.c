#include <stdio.h>

int main()
{

    int arr[] = {45, 78, 7, 623, 4, 5, 879, 3, 24, 456, 768, 90, 983, 2, 4567, 8, 9, 8574, 362, 45, 6789, 876, 253, 456, 789, 765, 514, 567, 898, 8, 73243, 23, 56789};
    int len = sizeof(arr) / sizeof(arr[0]);
    int num, found = 0, flag = 0;
    printf("Enter any number: ");
    scanf("%d", &num);

    for (int i = 0; i < len; i++)
    {
        if (arr[i] == num)
        {
            found = 1;
            break;
        }
    }

    if (found)
    {
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                flag = 1;
                break;
            }
        }
        
        if (flag)
        {
            printf("%d is in the array and is composite\n", num);
        }
        else
        {
            printf("%d is in the array and is prime\n", num);
        }
    
    }
    else
    {
        printf("%d is not in the array\n", num);
    }
    

    return 0;
}