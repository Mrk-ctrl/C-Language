#include <stdio.h>

int main(){

    int num, pcount = 0, ncount = 0, zcount = 0;

    while (1)
    {
        printf("Enter any Number: ");
        scanf("%d", &num);

        if (num > 0)
        {
            pcount++;
        }
        else if (num == 0)
        {
            zcount++;
        }
        else
        {
            ncount++;
        }

        char ch;

        printf("Do you want to continue: ");
        scanf(" %c", &ch);

        if (ch == 'n')
        {
            break;
        }
    }

    printf("The number of Positive Digits are: %d\n", pcount);
    printf("The number of Negative Digits are: %d\n", ncount);
    printf("The number of Zeros are: %d\n", zcount);
    

    return 0;
}