#include <stdio.h>

int main(){

    int arr[] = {45, 34, 5, 54, 24, 56, 7};
    int len = sizeof(arr) / sizeof(arr[0]);
    int copy_arr[len];

    for (int i = 0; i < len; i++)
    {
        copy_arr[i] = arr[i];
    }

    printf("Copied array\n");
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    
    

    return 0;
}