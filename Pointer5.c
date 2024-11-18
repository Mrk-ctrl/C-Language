#include <stdio.h>

int main(){

    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = &arr[0];

    ptr++;
    printf("%d\n", *ptr);

    ptr--;
    printf("%d\n", *ptr);

    return 0;
}