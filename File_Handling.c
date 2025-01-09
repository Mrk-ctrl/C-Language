#include <stdio.h>
#include <string.h>

int main(){

    FILE *fp;
    fp = fopen("file.txt", "w");

    char str[50];
    printf("Enter the string: ");
    fgets(str, 50, stdin);
    
    for (int i = 0; i < strlen(str); i++)
    {
        fputc(str[i], fp);
    }
    

    fclose(fp);

    return 0;
}