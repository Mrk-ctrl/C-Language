#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;
    printf("Enter the size: ");
    scanf("%d", &n);

    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter the element for %d index: ", i);
        scanf("%d", &ptr[i]);
    }

    printf("==========================\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }
    
    free(ptr);
    

    return 0;
}