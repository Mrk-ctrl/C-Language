#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(0));
    int random_number = rand() % 1000;
    int num;

    while (1)
    {
        printf("Enter any Number: ");
        scanf("%d", &num);

        if (num > random_number)
        {
            printf("Input number is greater try something smaller\n");
        }
        else if (num == random_number)
        {
            printf("7 crore apne sahi number guess kar liya %d", random_number);
            break;
        }
        else
        {
            printf("Input number is smaller try something greater\n");
        }
        
        
    }
    

    return 0;
}