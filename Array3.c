#include <stdio.h>

int main(){

    int arr[] = {5, 3, 67, 87, 54, 234, 56, 8, 324, 56, 67, 34, 32, 45, 234};
    int len = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < len; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("%d is even\n", arr[i]);
        }
        else
        {
            printf("%d is odd\n", arr[i]);
        }
        
    }
    

    return 0;
}