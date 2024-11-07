#include <stdio.h>

int main(){

    int arr[] = {4, 6, 32, 67, 89, 65, 32, 2, 56, 8, 98, 54, 32, 4, 56, 6, 4, 7, 4, 56, 34, 56, 4};
    int len = sizeof(arr) / sizeof(arr[0]);
    int num, flag = 0, count = 0;
    printf("Enter any Number: ");
    scanf("%d", &num);

    for (int i = 0; i < len; i++)
    {
        if (arr[i] == num)
        {
            flag = 1;
            count++; 
        }
        
    }

    if (flag)
    {
        printf("%d is in the array and was repeated %d times\n", num, count);
    }
    else
    {
        printf("%d is not in the array\n", num);
    }
    
    

    return 0;
}