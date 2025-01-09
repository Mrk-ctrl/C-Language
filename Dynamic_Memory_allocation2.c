#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, i = 0;
    printf("Enter the size: ");
    scanf("%d", &n);

    int *ptr;
    ptr = (int *)calloc(n, sizeof(int));

    for (i = 0; i < n; i++)
    {
        printf("Enter the element for %d index: ", i);
        scanf("%d", &ptr[i]);
    }

    printf("\n==========================\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }
    
    printf("\nEnter the new size: ");
    scanf("%d", &n);

    ptr = (int *)realloc(ptr, n * sizeof(int));

    for (int j = i; j < n; j++)
    {
        printf("Enter the element for %d index: ", j);
        scanf("%d", &ptr[j]);
    }
    
    printf("==============================\n");

    for (i = 0; i < n; i++)
    {
       printf("%d ", ptr[i]);
    }

    free(ptr);

    return 0;
}