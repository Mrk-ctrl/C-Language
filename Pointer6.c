#include <stdio.h>

int main(){

    int arr[] = {1, 2, 5, 4, 3, 6, 7, 8, 9, 10};
    int *ptr = &arr[2];
    int *qtr = &arr[4];

    printf("The answer is: %d\n", ptr > qtr);
    printf("The answer is: %d\n", ptr < qtr);

    qtr = &arr[2];
    printf("The answer is: %d\n", ptr == qtr);

    return 0;
}