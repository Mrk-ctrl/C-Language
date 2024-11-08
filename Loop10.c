#include <stdio.h>

int main(){

    // int i = 1;

    // while(i <= 10){
    //     printf("%d\n", i);
    //     i++;
    // }

    for(int i = 1, j = 1; j <= 10, i <= 5; i++, j++){
        printf("%d %d\n", i, j);
    }

    return 0;
}