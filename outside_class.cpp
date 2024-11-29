#include <iostream>
using namespace std;

class Employee{
private:
    int age;
    int id;
    int salary;

public:
    void setdata();
    void getdata();
};

void Employee :: setdata(){
    cout << "Enter the age: ";
    cin >> age;

    cout << "Enter the id: ";
    cin >> id;

    cout << "Enter the salary: ";
    cin >> salary;
}

void Employee :: getdata(){
    cout << "The age is: " << age << endl;
    cout << "The id is: " << id << endl;
    cout << "The salary is: " << salary << endl;
}

int main(){

    Employee emp;
    emp.setdata();
    emp.getdata();

    return 0;
}