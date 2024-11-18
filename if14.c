#include <stdio.h>

int main()
{
    int Physcis, Chemistry, Math, Computer, Biology;

    printf("Enter the Marks for Physcis: ");
    scanf("%d", &Physcis);

    printf("Enter the Marks for Chemistry: ");
    scanf("%d", &Chemistry);

    printf("Enter the Marks for Math: ");
    scanf("%d", &Math);

    printf("Enter the Marks for Computer: ");
    scanf("%d", &Computer);

    printf("Enter the Marks for Biology: ");
    scanf("%d", &Biology);

    int per = (Math + Physcis + Computer + Biology + Chemistry) / 5;

    if (per >= 90 && per <= 100)
    {
        printf("Grade A\n");
    }
    else if (per >= 80 && per < 90)
    {
        printf("Grade B\n");
    }
    else if (per >= 70 && per < 80)
    {
        printf("Grade C\n");
    }
    else if (per >= 60 && per < 70)
    {
        printf("Grade D\n");
    }
    else if (per >= 40 && per < 60)
    {
        printf("Grade E\n");
    }
    else
    {
        printf("Grade F\n");
    }

    printf("Your percrentage is: %d\n", per);

    return 0;
}