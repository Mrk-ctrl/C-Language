#include <stdio.h>

int main(){

    int Hardness, Tensile_strength, hh = 0, cc = 0, ts = 0 ;
    float Carbon_content;

    printf("Enter the Hardness: ");
    scanf("%d", &Hardness);

    printf("Enter the Carbon Content: ");
    scanf("%f", &Carbon_content);

    printf("Enter the Tensile Strength: ");
    scanf("%d", &Tensile_strength);

    if (Hardness > 50)
    {
        hh = 1;
    }

    if (Carbon_content < 0.7)
    {
        cc = 1;
    }
    
    if (Tensile_strength > 5600)
    {
        ts = 1;
    }
    
    
    if (hh == 1 && cc == 1 && ts == 1)
    {
        printf("Grade of Steel is 10\n");
    }
    else if (hh == 1 && cc == 1 && ts == 0)
    {
        printf("Grade of Steel is 9\n");
    }
    else if (hh == 0 && cc == 1 && ts == 1)
    {
        printf("Grade fof Steel is 8\n");
    }
    else if (hh == 1 && cc == 0 && ts == 1)
    {
        printf("Grade of Steel is 7\n");
    }
    else if (hh == 1 || cc == 1 || ts == 1)
    {
        printf("Grade of Steel is 6\n");
    }
    else
    {
        printf("Grade of Steel is 5\n");
    }
    

    return 0;
}