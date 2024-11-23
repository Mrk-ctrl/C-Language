#include <stdio.h>

struct Employee
{
    int age;
    float salary;
    int id;
};

int main(){

    struct Employee emp = {.id = 1, .salary = 12000.56, .age = 25};
    // struct Employee emp = {25, 345.6, 1};
    // emp.age = 23;
    // emp.id = 1;
    // emp.salary = 12000.5;

    printf("The age is: %d\n", emp.age);
    printf("The id is: %d\n", emp.id);
    printf("The salary is: %.2f\n", emp.salary);

    return 0;
}