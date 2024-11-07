#include <stdio.h>

int main(){

    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int num, flag = 0;
    printf("Enter any Number: ");
    scanf("%d", &num);

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == num)
            {
                flag = 1;
                printf("%d is in the array\n", num);
                for (int k = 1; k < 10; k++)
                {
                    printf("%d * %d = %d\n", num, k, num * k);
                }
                break;
            }
            
        }
        
    }

    if (!flag)
    {
        printf("%d is not in the array\n", num);
    }
    
    

    return 0;
}