#include <stdio.h>

int main(){

    int arr[4][5] = {{1, 2, 3, 4, 5},
                     {6, 7, 8, 9, 10},
                     {11, 12, 13, 14, 15},
                     {16, 17, 18, 19, 20}
    };
    int sum = 0;

    printf("Sum of Rows\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            sum = sum + arr[i][j]; 
        }
        printf("The sum of %d row is: %d\n", i, sum);
        sum = 0;
    }
    
    printf("============================\n");

    printf("Sum of Columns\n");
    for (int j = 0; j < 5; j++)
    {
        for (int i = 0; i < 4; i++)
        {
            sum = sum + arr[i][j];
        }
        printf("The sum of %d columns is: %d\n", j, sum);
        sum = 0;
    }
    


    return 0;
}