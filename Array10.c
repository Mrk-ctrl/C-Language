#include <stdio.h>

int main()
{

    int arr[] = {45, 6, 325, 486, 434, 5687, 43, 456, 2345, 67, 567, 845, 67, 8374, 567, 4, 567, 89, 45, 8372, 345, 654, 678, 456, 783, 4, 56, 72, 63, 4567, 87356, 678, 434, 567, 3};
    int len = sizeof(arr) / sizeof(arr[0]);
    int evenindex = 0, oddindex = 0;
    int evencount = 0, oddcount = 0;

    for (int i = 0; i < len; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evencount++;
        }
        else
        {
            oddcount++;
        }
        
    }
    
    int even_array[evencount], odd_array[oddcount];

    for (int i = 0; i < len; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even_array[evenindex] = arr[i];
            evenindex++;
        }
        else
        {
            odd_array[oddindex] = arr[i];
            oddindex++;  
        }
        
    }

    printf("Even Array\n");
    for (int i = 0; i < evencount; i++)
    {
        printf("%d ", even_array[i]);
    }
    
    printf("\n========================\n");

    for (int i = 0; i < oddcount; i++)
    {
        printf("%d ", odd_array[i]);
    }
    
    

    return 0;
}