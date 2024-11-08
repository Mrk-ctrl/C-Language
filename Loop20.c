#include <stdio.h>

int main(){

    int num, result = 0, mul = 1, rem = 0, count = 0, cnt, q;
    printf("Enter any Number: ");
    scanf("%d", &num);

    q = num;

    while (q != 0)
    {
        q = q / 10;
        count++;
    }

    q = num;
    cnt = count;

    while (q != 0)
    {
        rem = q % 10;
        while (cnt != 0)
        {
            mul = mul * rem;
            cnt--;
        }
        result = result + mul;
        q = q / 10;
        cnt =count;
        mul = 1;
    }

    if (result == num)
    {
        printf("Armstrong\n");
    }
    else
    {
        printf("Not Armstrong\n");
    }
    
    
    

    return 0;
}