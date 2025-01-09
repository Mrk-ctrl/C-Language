#include <stdio.h>

int main(){

    FILE *fp;
    fp = fopen("file.txt", "r");

    char str[50];

    while (fgets(str, 50, fp) != NULL)
    {
        printf("%s\n", str);
    }

    fclose(fp);

    return 0;
}