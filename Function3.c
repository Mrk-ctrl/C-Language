#include <stdio.h>

int check_prime(){
    int num, flag = 0;
    printf("Enter any Number: ");
    scanf("%d", &num);

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
        
    }
    
    if (flag)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
    
}

int main(){

    // int x = check_prime();

    if (check_prime())
    {
        printf("Composite\n");
    }
    else
    {
        printf("Prime\n");
    }
    

    return 0;
}