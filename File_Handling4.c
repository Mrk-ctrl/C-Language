#include <stdio.h>

int main(){

    FILE *fp;
    fp = fopen("file.txt", "a");

    char str[50];
    printf("Enter the string: ");
    fgets(str, 50, stdin);

    fputs(str, fp);

    fclose(fp);

    return 0;
}