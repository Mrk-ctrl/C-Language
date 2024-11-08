#include <stdio.h>

int main(){

    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int evencount = 0, oddcount = 0, even_index = 0, odd_index = 0;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] % 2 == 0)
            {
                evencount++;
            }
            else
            {
                oddcount++;
            }
            
        }
        
    }

    int evenarray[evencount], oddarray[oddcount];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] % 2 == 0)
            {
                evenarray[even_index] = arr[i][j];
                even_index++;
            }
            else
            {
                oddarray[odd_index] = arr[i][j];
                odd_index++;
            }
            
        }
        
    }

    printf("Even Array\n");
    for (int i = 0; i < evencount; i++)
    {
        printf("%d ", evenarray[i]);
    }
    
    printf("\n========================\n");

    for (int i = 0; i < oddcount; i++)
    {
        printf("%d ", oddarray[i]);
    }
    
    
    

    return 0;
}