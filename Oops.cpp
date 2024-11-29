#include <iostream>
using namespace std;

class Student{
private:
    string name;
    int age;
    int roll_number;

public:
    void setdata(string n, int a, int rn){
        name = n;
        age = a;
        roll_number = rn;
    }

    void getdata(){
        cout << "The name is: " << name << endl;
        cout << "The age is: " << age << endl;
        cout << "The roll number is: " << roll_number << endl;
    }
};

int main(){

    Student s1, s2;
    s1.setdata("John", 12, 1);
    s2.setdata("Rahul", 14, 2);

    s1.getdata();
    s2.getdata();
    // s1.name = "John";
    // s1.roll_number = 1;
    // s1.age = 12;

    // s2.name = "Rahul";
    // s2.roll_number = 2;
    // s2.age = 10;
    

    return 0;
}