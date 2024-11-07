#include <stdio.h>

int main()
{

    int arr[4][5] = {{34, 3, 45, 234, 23},
                     {34, 5, 56, 23, 54},
                     {90, 6, 34, 2, 65},
                     {32, 6, 34, 67, 45}};

    int num, flag = 0, count = 0;
    printf("Enter any Number: ");
    scanf("%d", &num);

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr[i][j] == num)
            {
                flag = 1;
                count++; 
            }
            
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