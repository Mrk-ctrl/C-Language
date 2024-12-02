#include <iostream>
using namespace std;

class Student{
private:
    string name;
    int age;
    int roll_number;

public:
    // Student(string n, int a, int rn){
    //     name = n;
    //     age = a;
    //     roll_number = rn;
    // }

    Student(){
        cout << "Enter the name: ";
        cin >> name;

        cout << "Enter the age: ";
        cin >> age;

        cout << "Enter the roll number: ";
        cin >> roll_number;
    }

    void getdata(){
        cout << "The name is: " << name << endl;
        cout << "The age is: " << age << endl;
        cout << "The rollnumber is: " << roll_number << endl;
    }
};

int main(){

    Student s1;
    s1.getdata();

    return 0;
}