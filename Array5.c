#include <stdio.h>

int main(){

    int arr[] = {45, 56, 87, 4, 7, 5 ,13, 17};
    int len = sizeof(arr) / sizeof(arr[0]);
    int num, flag = 0, found = 0;
    printf("Enter any Number: ");
    scanf("%d", &num);

    for (int i = 0; i < len; i++)
    {
        if (arr[i] == num)
        {
            found = 1;
            break;
        }
        
    }

    if (found)
    {
        for (int i = 2; i < num; i++)
        {
            if (num % 2 == 0)
            {
                flag = 1;
                break;
            }
            
        }
        
        if (flag)
        {
            printf("%d is in the array and is composite\n", num);
        }
        else{
            printf("%d is in the array and is prime\n", num);
        }
    }
    else
    {
        printf("%d is not in the array", num);        
    }
    
    

    return 0;
}