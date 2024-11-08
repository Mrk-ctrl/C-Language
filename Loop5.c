#include <stdio.h>

int main(){

    int num = 6, i = 1, evensum = 0, oddsum = 0;
    // printf("Enter any Number: ");
    // scanf("%d", &num);

    do
    {
        if (i % 2 == 0)
        {
            evensum = evensum + i; 
        }
        else
        {
            oddsum = oddsum + i; 
        }
        i++; 
    
    } while (i <= num); 

    printf("The sum of all even numbers is: %d\n", evensum);
    printf("The sum of all odd numbers is: %d\n", oddsum);

    

    return 0;
}