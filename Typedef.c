#include <stdio.h>
typedef int cat;

typedef struct Student
{
    int age;
}Student;

int main(){

    Student s1;
    s1.age = 20;
    printf("Age = %d\n", s1.age);
    // cat a = 20;
    // printf("%d", a);

    return 0;
}