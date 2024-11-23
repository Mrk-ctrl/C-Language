#include <stdio.h>
#include <string.h>

struct Student
{
    int age;
    char name[50];
    char course[50];
    int roll_number;
};

int main(){

    struct Student s[2];

    for (int i = 0; i < 2; i++)
    {
        printf("Enter the name of %d Student: ", i + 1);
        fgets(s[i].name, 50, stdin);
        s[i].name[strcspn(s[i].name, "\n")] = '\0';

        printf("Enter the course of %d Student: ", i + 1);
        fgets(s[i].course, 50, stdin);
        s[i].course[strcspn(s[i].course, "\n")] = '\0';

        printf("Enter the age of %d Student: ", i + 1);
        scanf("%d", &s[i].age);

        printf("Enter the roll number of %d Student: ", i + 1);
        scanf("%d", &s[i].roll_number);
        
        fgetc(stdin);

        printf("=========================\n");
    }
    
    for (int i = 0; i < 2; i++)
    {
        printf("The name of %d Student is: %s\n", i + 1, s[i].name);
        printf("The course of %d Student is: %s\n", i + 1, s[i].course);
        printf("The age of %d Student is: %d\n", i + 1, s[i].age);
        printf("The roll number of %d Student is: %d\n", i + 1, s[i].roll_number);
        printf("=====================\n");
    }
    

    // s[0].age = 12;
    // s[0].roll_number = 1;
    // strcpy(s[0].name, "John");
    // strcpy(s[0].course, "Computer");

    return 0;
}