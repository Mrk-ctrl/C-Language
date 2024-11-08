#include <stdio.h>

void fun(int choice){
    if (choice == 1)
    {
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
            printf("%d is composite\n", num);
        }
        else
        {
            printf("%d is prime\n", num);
        }
        printf("========================\n");
    }
    
    else if (choice == 2)
    {
        int num, q , rem = 0, result = 0;
        printf("Enter any Number: ");
        scanf("%d", &num);

        q = num;

        while (q != 0)
        {
            rem = q % 10;
            result = result * 10 + rem;
            q = q / 10;
        }
        
        if (result == num)
        {
            printf("%d is Palindrome\n", num);
        }
        else 
        {
            printf("%d is not Palindrome\n", num);
        }
        printf("========================\n");
    }

    else if (choice == 3)
    {
        int num, evensum = 0, oddsum = 0;
        printf("Enter any Number: ");
        scanf("%d", &num);

        for (int i = 1; i <= num; i++)
        {
            if (i % 2 == 0)
            {
                evensum = evensum + i;
            }
            else
            {
                oddsum = oddsum + i;
            }
            
        }
        printf("The sum of all even numbers is: %d\n", evensum);
        printf("The sum of all odd numbers is: %d\n", oddsum);printf("=========================\n");
    }
    
    else if (choice == 4)
    {
        int num, count = 0;
        printf("Enter any Number: ");
        scanf("%d", &num);

        while (num != 0)
        {
            num = num / 10;
            count++;
        }
        printf("The number of Digits are: %d\n", count);
        printf("===============================\n");
    }
    
}

int main(){

    int choice;
    printf("Choose From Below Options\n");
    printf("1 For Prime Number\n");
    printf("2 For Palindrome Number\n");
    printf("3 For Even Odd sum\n");
    printf("4 For Number of Digits count\n");
    printf("5 For Exit\n");
    printf("==========================\n");

    while (1)
    {
        printf("Enter your choice: ");
        scanf("%d", &choice);
        printf("==========================\n");
        if (choice == 1)
        {
            fun(choice);
        }
        else if (choice == 2)
        {
            fun(choice);
        }
        else if (choice == 3)
        {
            fun(choice);
        }
        else if (choice == 4)
        {
            fun(choice);
        }
        else if (choice == 5)
        {
            printf("Code Exited\n");
            break;
        }
        else
        {
            printf("Invalid Choice\nTry Again\n");
            printf("=======================\n");
        }
        
    }
    

    return 0;
}