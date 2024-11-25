/*
Create a structure to specify data of customers in a bank. The data to be stored is: Account number, Name, Balance in account. Assume a maximum of 200 customers in the bank. 
(a) Write a function to print the Account number and name of each customer with balance below Rs. 100. 
(b) If a customer requests for withdrawal or deposit, it is given in the form: Acct. no, amount, code (1 for deposit, 0 for withdrawal) Write a program to give a message, “The balance is insufficient for the specified withdrawal”. 
*/

#include <stdio.h>
#include <string.h>
#define Max_size 50
#define Array_size 2

typedef struct Bank
{
    char name[Max_size];
    int account_number;
    int balance;
}Bank;

void customer_data(Bank b[]){
    for (int i = 0; i < Array_size; i++)
    {
        printf("Enter the name of %d Customer: ", i + 1);
        fgets(b[i].name, Max_size, stdin);
        b[i].name[strcspn(b[i].name, "\n")] = '\0';

        printf("Enter the account number of %d Customer: ", i + 1);
        scanf("%d", &b[i].account_number);

        printf("Enter the balance of %d Customer: ", i + 1);
        scanf("%d", &b[i].balance);

        fgetc(stdin);

        printf("=======================\n");
    }
    
}
 
void withdrawal(Bank b[]){
    int acn, amount, flag = 0;
    printf("Enter your account number: ");
    scanf("%d", &acn);

    for (int i = 0; i < Array_size; i++)
    {
        if (acn == b[i].account_number)
        {
            flag = 1;
            printf("Enter the amount you want to withdraw: ");
            scanf("%d", &amount);

            if (b[i].balance >= amount)
            {
                b[i].balance -= amount;
                printf("You have successfully withdrawn %drs\n Now your current balance is: %drs\n", amount, b[i].balance);
                printf("========================\n");
            }
            else
            {
                printf("Insufficinet Balance\n");
                printf("========================\n");
            }
               
        }
        
    }

    if (!flag)
    {
        printf("No customer account with this number found\n");
        printf("===========================\n");
    }
    
    
}

int main(){

    int choice;
    Bank b[Array_size];
    customer_data(b);

    printf("Choose from below Options\n");
    printf("0 for withdrawal\n");
    printf("1 for deposite\n");
    printf("2 for to print name of customer with balance below 100\n");
    printf("3 for exit\n");
    printf("===========================\n");

    while (1)
    {
        printf("Enter Your choice: ");
        scanf("%d", &choice);
        printf("==========================\n");

        if (choice == 0)
        {
            withdrawal(b);
        }
        // else if (choice == 1)
        // {
        //     deposite(b);
        // }
        // else if (choice == 2)
        // {
        //     find_by_balance(b);
        // }
        else if (choice == 3)
        {
            printf("Code Exited\n");
            break;
        }
        
        else
        {
            printf("Invalid Choice\n");
            printf("====================\n");
        }
        
    }
    

    return 0;
}