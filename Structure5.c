/*
Create a structure to specify data on students given below: Roll number, Name, Department, Course, Year of joining Assume that there are not more than 450 students in the college.
(a) Write a function to print names of all students who joined in a particular year.
(b) Write a function to print the data of a student whose roll number is given.
*/

#include <stdio.h>
#include <string.h>
#define Max_size 50
#define Array_size 2

typedef struct Student
{
    char name[Max_size];
    char course[Max_size];
    char department[Max_size];
    int roll_number;
    int year_of_joining;
} Student;

void student_data(Student s[])
{
    for (int i = 0; i < Array_size; i++)
    {
        printf("Enter the name of %d Student: ", i + 1);
        fgets(s[i].name, Max_size, stdin);
        s[i].name[strcspn(s[i].name, "\n")] = '\0';

        printf("Enter the course of %d Student: ", i + 1);
        fgets(s[i].course, Max_size, stdin);
        s[i].course[strcspn(s[i].course, "\n")] = '\0';

        printf("Enter the department of %d Student: ", i + 1);
        fgets(s[i].department, Max_size, stdin);
        s[i].department[strcspn(s[i].department, "\n")] = '\0';

        printf("Enter the roll number of %d Student: ", i + 1);
        scanf("%d", &s[i].roll_number);

        printf("Enter the Year of Joining of %d Student: ", i + 1);
        scanf("%d", &s[i].year_of_joining);

        fgetc(stdin);

        printf("=============================\n");
    }
}

void find_by_year(Student s[]){
    int yoj, flag = 0;
    printf("Enter the year you want to find by: ");
    scanf("%d", &yoj);

    for (int i = 0; i < Array_size; i++)
    {
        if (yoj == s[i].year_of_joining)
        {
            flag = 1;
            printf("The name of Student is: %s\n", s[i].name);
            printf("The course of %s Student is: %s\n", s[i].name, s[i].course);
            printf("The department of %s Student is: %s\n", s[i].name, s[i].department);
            printf("The year of joining of %s Student is: %d\n", s[i].name, s[i].year_of_joining);
            printf("The roll number of %s Student is: %d\n", s[i].name, s[i].roll_number);
            printf("===========================\n");
        }
        
    }
    
    if (!flag)
    {
        printf("No Student in this year found\n");
        printf("=======================\n");
    }
    
}

int main()
{
    int choice;
    Student s[Array_size];
    student_data(s);

    printf("Choose From Below Options\n");
    printf("1 to find by year of joining\n");
    printf("2 to find by roll number\n");
    printf("3 to exit\n");
    printf("========================\n");

    while (1)
    {
        printf("Enter your choice: ");
        scanf("%d", &choice);
        printf("========================\n");
        
        if (choice == 1)
        {
            find_by_year(s);
        }
        // else if (choice == 2)
        // {
        //     find_by_roll(s);
        // }
        else if (choice == 3)
        {
            printf("Code Exited\n");
            break;
        }
        else
        {
            printf("Invalid Choice Try Again\n");
            printf("=======================");
        }
        
    }
    

    return 0;
}