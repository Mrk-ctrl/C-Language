#include <stdio.h>

int main()
{

    int arr[] = {54, 67, 3, 5468, 3234, 567, 84, 65, 726, 345, 6234, 5, 67835, 67, 243, 57, 34, 56, 72, 345, 67, 2545};
    int len = sizeof(arr) / sizeof(arr[0]);
    int a, b;
    printf("Enter any two index: ");
    scanf("%d %d", &a, &b);

    if (a < len && b < len)
    {
        int *ptr = &arr[a];
        int *qtr = &arr[b];
        printf("The sum is: %d\n", *ptr + *qtr);
    }
    else
    {
        printf("Index does not exist\n");
    }
    
    

    return 0;
}