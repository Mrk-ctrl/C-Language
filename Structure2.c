#include <stdio.h>

struct Employee
{
    int age;
    int salary;
    int id;
};

int Manager()
{
    struct Employee manager;
    manager.age = 56;

    if (manager.age > 50)
    {
        manager.salary = 60000;
    }
    else
    {
        manager.salary = 40000;
    }
    
    return manager.salary;
}

int main()
{
    struct Employee emp1, emp2;
    
    printf("Enter the salary of Employee 1: ");
    scanf("%d", &emp1.salary);

    printf("Enter the salary of Employee 2: ");
    scanf("%d", &emp2.salary);

    printf("The salary of Employee 1 is: %d\n", emp1.salary);
    printf("The salary of Employee 2 is: %d\n", emp2.salary);
    printf("The salary of Manager is: %d\n", Manager());

    return 0;
}