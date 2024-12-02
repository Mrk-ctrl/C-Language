#include <iostream>
using namespace std;

class Base{
private:
    int age;
    string name = "John";

public:
    void setdata(){
        cout << "Enter the name: ";
        cin >> name;

        cout << "Enter the age: ";
        cin >> age;
    }

    void getdata(){
        cout << "The name is: " << name << endl;
        cout << "The age is: " << age << endl;
    }
};

class Derived : public Base{
private:
    int roll_number;
    string course;

public:
    void scandata(){
        cout << "Enter the course: ";
        cin >> course;

        cout << "Enter the roll number: ";
        cin >> roll_number;
    }

    void printdata(){
        cout << "The course is: " << course << endl;
        cout << "The roll number is: " << roll_number << endl;
    }
};

int main(){

    Derived obj;
    obj.setdata();
    obj.scandata();
    obj.getdata();
    obj.printdata();

    return 0;
}