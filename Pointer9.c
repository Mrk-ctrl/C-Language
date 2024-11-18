#include <stdio.h>

int *fun(int arr[], int len){
    return &arr[len / 2];
}

int main(){

    int arr[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);
    int *n = fun(arr, len);
    printf("The value is: %d\n", *n);

    return 0;
}