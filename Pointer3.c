#include <stdio.h>

int main()
{

    int arr[] = {45, 62, 547, 345, 863, 245, 676, 85, 673, 45, 62, 34, 6573, 54, 763, 4, 5672, 345, 6787, 23, 546, 75};
    
    int len = sizeof(arr) / sizeof(arr[0]);
    int index;
    printf("Enter the index: ");
    scanf("%d", &index);

    if (index < len)
    {
        int *ptr = &arr[index];
        for (int i = 1; i <= 10; i++)
        {
            printf("%d * %d = %d\n", *ptr, i, *ptr * i);
        }
    }
    else
    {
        printf("Index does not exist\n");
    }

    return 0;
}