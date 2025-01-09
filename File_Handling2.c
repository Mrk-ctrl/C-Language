#include <stdio.h>

int main(){

    /*
    !   File Opening Modes
        w   -   Write
        r   -   Read
        a   -   Appeand
        w+  -   Write and Read
        r+  -   Read and Write
        a+  -   Write and Read
    */

    FILE *fp;
    fp = fopen("file.txt", "r");

    char ch;
    ch = fgetc(fp);

    while (!feof(fp))
    {
        printf("%c", ch);
        ch = fgetc(fp);
    }
    

    fclose(fp);

    return 0;
}