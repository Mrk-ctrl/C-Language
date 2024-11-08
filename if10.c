#include <stdio.h>

int main(){

    int order, stock, credit;
    printf("The price per stock is 100rs\n");

    printf("Enter the comany stock: ");
    scanf("%d", &stock);

    printf("Enter Your order: ");
    scanf("%d", &order);

    printf("Enter Your Credit: ");
    scanf("%d", &credit);

    if (order <= stock && credit >= (100 * order))
    {
        printf("You order will be deliverd shortly\n");
    }
    
    else if (order <= stock && credit < (100 * order))
    {
        printf("Insufficient Credit\n");
    }

    else if (order > stock && credit >= (100 * order))
    {
        printf("Youre remaing order will be delivered shortly\n");
    }
    
    

    return 0;
}