#include <stdio.h>

int main(){

    int num, i = 1;
    printf("Enter any Number: ");
    scanf("%d", &num);

    do
    {
        printf("%d * %d = %d\n",num, i, num * i);
        i++;
    } while (i <= 10);
    

    return 0;
}