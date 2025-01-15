//Century Year - 2000 1800 2100 1600 % 100 % 400
//Non-Century Year - 2012 2025 2024 1971 % 4

#include <stdio.h>

int main(){

    int year;
    printf("Enter any Year: ");
    scanf("%d", &year);

    if (year % 100 == 0) 
    {
        if (year % 400 == 0)
        {
            printf("Leap year and century year\n");
        }
        else
        {
            printf("Century year not a leap year\n");
        }
        
    }

    else
    {
        if (year % 4 == 0)
        {
            printf("Leap year non-century year\n");
        }
        else
        {
            printf("Non-century year not a leap year\n");
        }
        
    }
    
    

    return 0;
}