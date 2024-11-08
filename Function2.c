#include <stdio.h>

void Table(){
    int num;
    printf("Enter any Number: ");
    scanf("%d", &num);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", num, i, num * i);
    }
    printf("=======================\n");
}

int main(){

    Table();
    Table();
    Table();
    Table();

    return 0;
}

