#include <stdio.h>

int main()
{

    int arr[] = {45, 64, 77, 69483, 576, 24, 567, 45, 6789, 45, 67948, 3234, 5678, 546, 7894, 6, 894, 3243, 5674, 56, 789, 4567, 84, 34, 57683, 5, 46783, 75, 6783, 546};
    int len = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;

    for (int i = 0; i < len; i++)
    {
        sum = sum + arr[i];
    }

    printf("The sum of all elements of array is: %d\n", sum);

    return 0;
}