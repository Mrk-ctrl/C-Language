#include <stdio.h>

int main(){

    int arr[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);
    int copy_arr[len];
    int j = 0;

    for (int i = len - 1; i >= 0; i--)
    {
        copy_arr[j] = arr[i];
        j++;
    }

    
    printf("Copied array\n");

    for (int i = 0; i < len; i++)
    {
        printf("%d ", copy_arr[i]);
    }
    
    

    return 0;
}